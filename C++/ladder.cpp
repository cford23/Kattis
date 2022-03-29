#include <iostream>
#include <cmath>

# define PI           3.14159265358979323846

int main() {
	int height, angle;
	float radians;
	std::cin >> height >> angle;

	radians = angle * (PI / 180);
	std::cout << ceil(height / sin(radians)) << std::endl;

	return 0;
}
