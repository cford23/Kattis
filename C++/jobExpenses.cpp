#include <iostream>

int main() {
    int n, k, value;
    int total = 0;

    std::cin >> n;
    for (k = 0; k < n; k++) {
        std::cin >> value;
        if (value < 0) {
            total += (value * -1);
        }
    }

    std::cout << total << std::endl;

    return 0;
}