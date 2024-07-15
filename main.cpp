#include "glaze/core/meta.hpp"
#include "logindata.hpp"
#include <chrono>
#include <fstream>
#include <glaze/glaze.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>

// Define the structure to match the JSON
// struct Order {
//   std::string order_id;
//   double total;
//   std::vector<std::string> items;
// };

// struct Address {
//   std::string street;
//   std::string city;
//   std::string country;
//   std::string zip;
// };

// struct User {
//   int64_t id;
//   std::string name;
//   std::string email;
//   int age;
//   bool is_active;
//   double balance;
//   std::vector<std::string> tags;
//   Address address;
//   std::vector<Order> orders;
// };

// // Glaze meta definitions
// template <> struct glz::meta<Order> {
//   using T = Order;
//   static constexpr auto value =
//       object("order_id", &T::order_id, "total", &T::total, "items",
//       &T::items);
// };

// template <> struct glz::meta<Address> {
//   using T = Address;
//   static constexpr auto value = object("street", &T::street, "city",
//   &T::city,
//                                        "country", &T::country, "zip",
//                                        &T::zip);
// };

// template <> struct glz::meta<User> {
//   using T = User;
//   static constexpr auto value =
//       object("id", &T::id, "name", &T::name, "email", &T::email, "age",
//       &T::age,
//              "is_active", &T::is_active, "balance", &T::balance, "tags",
//              &T::tags, "address", &T::address, "orders", &T::orders);
// };

// Glaze meta for MyloginData
template <> struct glz::meta<MyloginData> {
  static constexpr auto value =
      object("data", &MyloginData::data, "error", &MyloginData::error);
};

template <> struct glz::meta<BankInventory> {
  static constexpr auto value = object(
      "id", &BankInventory::id, "character_id", &BankInventory::character_id,
      "max_bank_index", &BankInventory::max_bank_index, "locked_item_ids",
      &BankInventory::locked_item_ids, "bank_item1_id",
      &BankInventory::bank_item1_id);
};

template <> struct glz::meta<Data> {
  static constexpr auto value =
      object("user", &Data::user, "bank_inventory", &Data::bank_inventory);
};

template <> struct glz::meta<User> {
  using T = User;
  static constexpr auto value = object(
      "id", &T::id, "registration_source", &T::registration_source, "ref",
      &T::ref, "subid", &T::subid, "ts_creation", &T::ts_creation, "network",
      &T::network, "app_version", &T::app_version, "app_version_registration",
      &T::app_version_registration, "device_type", &T::device_type, "confirmed",
      &T::confirmed, "login_count", &T::login_count, "locale", &T::locale,
      "premium_currency", &T::premium_currency, "geo_country_code",
      &T::geo_country_code, "settings", &T::settings, "status", &T::status,
      "trusted", &T::trusted, "ts_tos_accepted", &T::ts_tos_accepted,
      "ts_pp_accepted", &T::ts_pp_accepted);
};

// Function to read file content
std::string read_file(const std::string &filename) {
  std::ifstream file(filename);
  if (!file) {
    throw std::runtime_error("Unable to open file: " + filename);
  }
  return std::string(std::istreambuf_iterator<char>(file),
                     std::istreambuf_iterator<char>());
}

// Function to get current memory usage
void print_memory_usage() {
  std::ifstream stat_stream("/proc/self/stat", std::ios_base::in);
  std::string pid, comm, state, ppid, pgrp, session, tty_nr;
  std::string tpgid, flags, minflt, cminflt, majflt, cmajflt;
  std::string utime, stime, cutime, cstime, priority, nice;
  std::string O, itrealvalue, starttime;
  unsigned long vsize;
  long rss;

  stat_stream >> pid >> comm >> state >> ppid >> pgrp >> session >> tty_nr >>
      tpgid >> flags >> minflt >> cminflt >> majflt >> cmajflt >> utime >>
      stime >> cutime >> cstime >> priority >> nice >> O >> itrealvalue >>
      starttime >> vsize >> rss;

  stat_stream.close();

  long page_size_kb = sysconf(_SC_PAGE_SIZE) / 1024; // in kB
  std::cout << "Virtual Memory: " << vsize / 1024.0 << " kB" << std::endl;
  std::cout << "Resident Set Size: " << rss * page_size_kb << " kB"
            << std::endl;
}

int main() {
  const std::string filename = "loginData.json";
  const int num_trials = 5;

  try {
    // Read JSON file
    std::string json_content = read_file(filename);

    std::cout << "Input JSON size: " << json_content.size() << " bytes"
              << std::endl;
    std::cout << "Memory usage before parsing:" << std::endl;
    print_memory_usage();

    std::vector<long long> parsing_times;
    std::vector<long long> serialization_times;

    for (int i = 0; i < num_trials; ++i) {
      // Measure parsing time
      auto start_time = std::chrono::high_resolution_clock::now();

      MyloginData data;
      auto err = glz::read_json(data, json_content);

      auto end_time = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
          end_time - start_time);

      parsing_times.push_back(duration.count());

      if (err) {
        std::cerr << "Error parsing JSON: " << err << std::endl;
        return 1;
      }

      // // Basic validation
      // if (data.data.user.id == 0 ||
      //     data.data.user.registration_source.empty()) {
      //   std::cerr << "Error: Invalid data after parsing" << std::endl;
      //   return 1;
      // }

      // Measure serialization time
      start_time = std::chrono::high_resolution_clock::now();

      std::string output_json;
      err = glz::write_json(data, output_json);

      end_time = std::chrono::high_resolution_clock::now();
      duration = std::chrono::duration_cast<std::chrono::microseconds>(
          end_time - start_time);

      serialization_times.push_back(duration.count());

      if (err) {
        std::cerr << "Error serializing JSON: " << err << std::endl;
        return 1;
      }

      if (i == 0) { // Only print these once
        std::cout << "Output JSON size: " << output_json.size() << " bytes"
                  << std::endl;
        std::cout << "Memory usage after serialization:" << std::endl;
        print_memory_usage();
      }
    }

    // Calculate and print average times
    auto avg_parsing_time =
        std::accumulate(parsing_times.begin(), parsing_times.end(), 0LL) /
        num_trials;
    auto avg_serialization_time =
        std::accumulate(serialization_times.begin(), serialization_times.end(),
                        0LL) /
        num_trials;

    std::cout << "Average parsing time: " << avg_parsing_time << " microseconds"
              << std::endl;
    std::cout << "Average serialization time: " << avg_serialization_time
              << " microseconds" << std::endl;

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}