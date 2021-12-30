#include <iostream>
using namespace std;

int main() {

	int n, k, num;
	int total = 0;

	cin >> n;
	for (k = 0; k < n; k++) {
		cin >> num;
		total += num;
	}

	cout << total << endl;

	return 0;
}
