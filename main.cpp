#include "src/funcs/login_data_funcs.cpp"
#include <iostream>

int main() {
	const std::string filename = "sample.json";

	try {
		logindata(filename);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}