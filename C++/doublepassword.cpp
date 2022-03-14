#include <iostream>
#include <cmath>

int main() {
    std::string pass1, pass2;    
    std::cin >> pass1 >> pass2;

    int k;
    int count = 0;
    for (k = 0; k < 4; k++) {
        if (pass1[k] != pass2[k])
            count++;
    }

    std::cout << pow(2, count) << std::endl;

    return 0;
}