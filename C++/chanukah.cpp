#include <iostream>

int main() {
    int p;
    std::cin >> p;

    int k, n, i, j, candles;

    for (i = 1; i <= p; i++) {
        std::cin >> k >> n;

        candles = 0;
        for (j = 1; j <= n; j++) {
            candles += (j + 1);
        }

        std::cout << i << " " << candles << std::endl;
    }
    
    return 0;
}