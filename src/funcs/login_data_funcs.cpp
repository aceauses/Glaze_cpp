
#include "models/login_data.hpp"
#include <algorithm>
#include <chrono>
#include <fstream>
#include <glaze/glaze.hpp>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

std::string read_file(const std::string& filename) {
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

	stat_stream.close();

	long page_size_kb = sysconf(_SC_PAGE_SIZE) / 1024; // in kB
	std::cout << "Virtual Memory: " << vsize / 1024.0 << " kB"
			  << std::endl;
	std::cout << "Resident Set Size: " << rss * page_size_kb << " kB"
			  << std::endl;
}

void logindata(std::string filename) {
	// Read JSON file
	std::string json_content = read_file(filename);

	std::cout << "Input JSON size: " << json_content.size() << " bytes"
			  << std::endl;
	std::cout << "Memory usage before parsing:" << std::endl;
	print_memory_usage();

	std::vector<long long> parsing_times;
	std::vector<long long> serialization_times;

	// Measure parsing time
	auto start_time = std::chrono::high_resolution_clock::now();

	MyLoginData data;
	auto        err = glz::read_json(data, json_content);
	if (err) {
		std::cerr << "Error parsing JSON: "
				  << glz::format_error(err, json_content) << std::endl;
		return;
	}

	std::cout << "Memory usage after parsing:" << std::endl;
	print_memory_usage();

	auto end_time = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
		end_time - start_time);

	parsing_times.push_back(duration.count());

	std::cout << "Character total stats: "
			  << data.data.character.stat_total << std::endl;

	std::cout << "Memory usage before serialization:" << std::endl;
	print_memory_usage();
	// Measure serialization time
	start_time = std::chrono::high_resolution_clock::now();

	std::string output_json;
	err = glz::write_json(data, output_json);

	std::ofstream output_file("output.json");
	output_file << glz::prettify_json(output_json);
	output_file.close();

	end_time = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(
		end_time - start_time);

	serialization_times.push_back(duration.count());

	if (err) {
		std::cerr << "Error serializing JSON: "
				  << glz::format_error(err, output_json) << std::endl;
		return;
	}

	std::cout << "Memory usage after serialization:" << std::endl;
	print_memory_usage();

	// Calculate and print average times
	auto avg_parsing_time
		= std::accumulate(parsing_times.begin(), parsing_times.end(), 0LL);
	auto avg_serialization_time = std::accumulate(
		serialization_times.begin(), serialization_times.end(), 0LL);

	std::cout << "Average parsing time: " << avg_parsing_time
			  << " microseconds" << std::endl;
	std::cout << "Average serialization time: " << avg_serialization_time
			  << " microseconds" << std::endl;

	std::cout << "\n\n";

	std::cout << "Members in the guild: " << data.data.guild_members.size()
			  << std::endl;
	std::cout << "Member[10] name: " << data.data.guild_members[10].name
			  << std::endl;
	std::cout << "\n\n";
	std::cout << "Invetory gadget_item_id: "
			  << data.data.inventory.gadget_item_id << std::endl;

	std::cout << "Quests size: " << data.data.quests.size() << std::endl;
	std::sort(data.data.quests.begin(), data.data.quests.end(),
			  [](const Quest& a, const Quest& b) {
				  return a.duration < b.duration;
			  });
	std::cout << "Fastest quest time: " << data.data.quests[0].duration
			  << std::endl;
}