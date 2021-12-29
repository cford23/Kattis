#include <iostream>
using namespace std;

int main() {

	int n, k;
	char word[100];

	cin >> n;

	for (k = 1; k <= n; k++) {
		cin >> word;
		if (k % 2 == 1)
			cout << word << endl;
	}

	return 0;
}
