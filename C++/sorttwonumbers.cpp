#include <iostream>

int main() {

	int a, b;
	std::cin >> a >> b;

	if (a < b)
		std::cout << a << " " << b << std::endl;
	else
		std::cout << b << " " << a << std::endl;

	return 0;
}
