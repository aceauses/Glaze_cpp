// #include "glaze/json/custom.hpp"
#include "glaze/glaze.hpp"
#include "models/login_data.hpp"
#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
// #include <numeric>
#include <string>
#include <vector>

// Forward declarations
std::string read_file(const std::string& filename);
void        print_memory_usage();

void logindata(const std::string& filename) {
	// Read JSON file
	std::string json_content = read_file(filename);

	std::cout << "Input JSON size: " << json_content.size() << " bytes\n";
	std::cout << "Memory usage before parsing:\n";
	print_memory_usage();

	// Measure parsing time
	auto start_time = std::chrono::high_resolution_clock::now();

	MyLoginData data;
	auto        err = glz::read_json(data, json_content);
	if (err) {
		std::cerr << "Error parsing JSON: "
				  << glz::format_error(err, json_content) << '\n';
		return;
	}

	// std::cout << "Memory usage after parsing:\n";
	// print_memory_usage();

	auto end_time = std::chrono::high_resolution_clock::now();
	auto parsing_duration
		= std::chrono::duration_cast<std::chrono::microseconds>(
			  end_time - start_time)
			  .count();

	std::cout << "Character total stats: "
			  << data.data.character.stat_total << '\n';

	// std::cout << "Memory usage before serialization:\n";
	// print_memory_usage();

	// Measure serialization time
	start_time = std::chrono::high_resolution_clock::now();

	std::string output_json;
	err = glz::write_json(data, output_json);

	// if (err) {
	// 	// std::cerr << "Error serializing JSON: "
	// 	// 		  << glz::format_error(err, output_json) << '\n';
	// 	return;
	// }

	std::ofstream("output.json") << glz::prettify_json(output_json);

	end_time = std::chrono::high_resolution_clock::now();
	auto serialization_duration
		= std::chrono::duration_cast<std::chrono::microseconds>(
			  end_time - start_time)
			  .count();

	// std::cout << "Memory usage after serialization:\n";
	// print_memory_usage();

	// Print timing information
	std::cout << "Parsing time: " << parsing_duration << " microseconds\n";
	std::cout << "Serialization time: " << serialization_duration
			  << " microseconds\n";

	// Print data information
	std::cout << "\nMembers in the guild: "
			  << data.data.guild_members.size() << '\n';
	if (data.data.guild_members.size() > 10) {
		std::cout << "Member[10] name: "
				  << data.data.guild_members[10].name << '\n';
	}
	std::cout << "\nInventory gadget_item_id: "
			  << data.data.inventory.gadget_item_id << '\n';

	std::cout << "Quests size: " << data.data.quests.size() << '\n';
	if (!data.data.quests.empty()) {
		auto fastest_quest = std::min_element(
			data.data.quests.begin(), data.data.quests.end(),
			[](const Quest& a, const Quest& b) {
				return a.duration < b.duration;
			});
		std::cout << "Fastest quest time: " << fastest_quest->duration
				  << '\n';
	}
}

// Implementation of helper functions
std::string read_file(const std::string& filename) {
	std::ifstream file(filename);
	if (!file) {
		throw std::runtime_error("Unable to open file: " + filename);
	}
	return std::string(std::istreambuf_iterator<char>(file),
					   std::istreambuf_iterator<char>());
}

void print_memory_usage() {
	std::ifstream stat_stream("/proc/self/stat", std::ios_base::in);
	std::string   pid, comm, state, ppid, pgrp, session, tty_nr;
	std::string   tpgid, flags, minflt, cminflt, majflt, cmajflt;
	std::string   utime, stime, cutime, cstime, priority, nice;
	std::string   O, itrealvalue, starttime;
	unsigned long vsize;
	long          rss;

	stat_stream >> pid >> comm >> state >> ppid >> pgrp >> session
		>> tty_nr >> tpgid >> flags >> minflt >> cminflt >> majflt
		>> cmajflt >> utime >> stime >> cutime >> cstime >> priority
		>> nice >> O >> itrealvalue >> starttime >> vsize >> rss;

	long page_size_kb = sysconf(_SC_PAGE_SIZE) / 1024; // in kB
	std::cout << "Virtual Memory: " << vsize / 1024.0 << " kB\n";
	std::cout << "Resident Set Size: " << rss * page_size_kb << " kB\n";
}