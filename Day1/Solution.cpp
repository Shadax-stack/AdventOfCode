#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main() {
	std::vector<int> Input;
	std::ifstream InputFile("Input.txt");
	for (std::string Line; std::getline(InputFile, Line);) {
		Input.push_back(std::stoi(Line));
	}
	for (int val0 : Input) {
		for (int val1 : Input) {
			if (val0 + val1 == 2020) {
				std::cout << val0 * val1;
				return 0;
			}
		}
	}
	return -1;
}