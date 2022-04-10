#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

int main() {
	int input;
	std::string binary;

	std::cin >> input;
	binary = std::bitset<32>(input).to_string();

	// Trim leading 0s off of binary
	binary.erase(0, binary.find_first_not_of('0'));

	std::reverse(binary.begin(), binary.end());

	std::cout << std::stoi(binary, 0, 2) << std::endl;

	return 0;
}
