#include <iostream>
using namespace std;

bool isHarshad(int n) {
    int sum = 0;
    int input = n;

    while (input != 0) {
        sum += input % 10;
        input /= 10;
    }

    if (n % sum == 0)
        return true;
    else
        return false;
}

int main() {

    int n;
    cin >> n;

    while (!isHarshad(n) && n <= 1000000000) {
        n += 1;
    }

    cout << n << endl;

    return 0;
}