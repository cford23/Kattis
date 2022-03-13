#include <iostream>
#include <string>

int main() {
    std::string input;
    int k;

    std::cin >> input;
    for (k = 0; k < input.length() - 1; k++) {
        if (k != input.length() - 2) {
            // Not at second to last char, check 3 char smile, :-) and ;-)
            if ((input[k] == ':' || input[k] == ';') && input[k + 1] == '-' && input[k + 2] == ')') {
                std::cout << k << std::endl;
            }
        }
        // Check 2 char smile, :) and ;)
        if ((input[k] == ':' || input[k] == ';') && input[k + 1] == ')') {
            std::cout << k << std::endl;
        }
    }

    return 0;
}