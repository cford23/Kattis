#include <iostream>
#include <string>

int main() {
    int k, i;
    int foundBlimp = 0;
    std::string code;

    for (k = 1; k <= 5; k++) {
        std::cin >> code;

        for (i = 0; i < code.length() - 2; i++) {
            if (code[i] == 'F' && code[i + 1] == 'B' && code[i + 2] == 'I') {
                std::cout << k << std::endl;
                foundBlimp = 1;
            }
        }
    }

    if (!foundBlimp)
        std::cout << "HE GOT AWAY!" << std::endl;
    
    return 0;
}