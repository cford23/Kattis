#include <iostream>
#include <string>

int main() {
    std::string order;
    std::cin >> order;

    int letterCounts[25] = {0};
    int changeMade = 1;
    int k, letterIndex;

    for (k = 0; k < order.length(); k++) {
        letterIndex = order[k] - 97;
        letterCounts[letterIndex]++;
    }

    for (k = 0; k < 26; k++) {
        if (letterCounts[k] > 1)
            changeMade = 0;
    }
    std::cout << changeMade << std::endl;

    return 0;
}