#include <chrono>
#include <fstream>
#include <glaze/glaze.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>

// Define the structure to match the JSON
struct Order {
  std::string order_id;
  double total;
  std::vector<std::string> items;
};

struct Address {
  std::string street;
  std::string city;
  std::string country;
  std::string zip;
};

struct User {
  int64_t id;
  std::string name;
  std::string email;
  int age;
  bool is_active;
  double balance;
  std::vector<std::string> tags;
  Address address;
  std::vector<Order> orders;
};

// Glaze meta definitions
template <> struct glz::meta<Order> {
  using T = Order;
  static constexpr auto value =
      object("order_id", &T::order_id, "total", &T::total, "items", &T::items);
};

template <> struct glz::meta<Address> {
  using T = Address;
  static constexpr auto value = object("street", &T::street, "city", &T::city,
                                       "country", &T::country, "zip", &T::zip);
};

template <> struct glz::meta<User> {
  using T = User;
  static constexpr auto value =
      object("id", &T::id, "name", &T::name, "email", &T::email, "age", &T::age,
             "is_active", &T::is_active, "balance", &T::balance, "tags",
             &T::tags, "address", &T::address, "orders", &T::orders);
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
  const std::string filename = "sample.json";

  try {
    // Read JSON file
    std::string json_content = read_file(filename);

    std::cout << "Memory usage before parsing:" << std::endl;
    print_memory_usage();

    // Measure parsing time
    auto start_time = std::chrono::high_resolution_clock::now();

    User user;
    auto err = glz::read_json(user, json_content);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
        end_time - start_time);

    if (err) {
      std::cerr << "Error parsing JSON: " << err << std::endl;
      return 1;
    }

    // Print results
    std::cout << "Parsing completed successfully." << std::endl;
    std::cout << "Time taken: " << duration.count() << " microseconds"
              << std::endl;
    std::cout << "User name: " << user.name << std::endl;
    std::cout << "Number of orders: " << user.orders.size() << std::endl;

    std::cout << "Memory usage after parsing:" << std::endl;
    print_memory_usage();

    // Measure serialization time
    start_time = std::chrono::high_resolution_clock::now();

    std::string output_json;
    (void)glz::write_json(user, output_json);

    end_time = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(
        end_time - start_time);

    std::cout << "Serialization completed successfully." << std::endl;
    std::cout << "Time taken: " << duration.count() << " microseconds"
              << std::endl;
    std::cout << "Output JSON size: " << output_json.size() << " bytes"
              << std::endl;

    std::cout << "Memory usage after serialization:" << std::endl;
    print_memory_usage();

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}