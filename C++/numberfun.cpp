#include <iostream>
using namespace std;

int main() {

	int n, k, a, b, c;

	std::cin >> n;

	for (k = 0; k < n; k++) {
		std::cin >> a >> b >> c;
		
		if (a > b) {
			if (a + b == c || a - b == c || a * b == c || (a / b == c && a % b == 0))
				cout << "Possible" << endl;
			else
				cout << "Impossible" << endl;	
		}
		else {
			if (a + b == c || b - a == c || a * b == c || (b / a == c && b % a == 0))
				cout << "Possible" << endl;
			else
				cout << "Impossible" << endl;
		}
	}

	return 0;
}
