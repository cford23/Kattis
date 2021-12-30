#include <iostream>
using namespace std;

int main() {

    int n, k, num;
    int length = 0;

    cin >> n;
    for (k = 0; k < n; k++) {
        cin >> num;
        length += num;
        if (k != 0)
            length -= 1;
    }

    cout << length << endl;

    return 0;
}