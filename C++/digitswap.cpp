#include <iostream>
using namespace std;

int main() {

	int input, num1, num2;
	cin >> input;

	num1 = input % 10;
	input /= 10;
	num2 = input % 10;

	cout << num1 << num2 << endl;

	return 0;
}
