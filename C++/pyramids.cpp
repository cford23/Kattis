#include <iostream>

int main() {
    int numAvailBlocks;
    int totalUsed = 0;
    int levels = 0;
    int width = 1;
    
    std::cin >> numAvailBlocks;

    while (totalUsed + (width * width) <= numAvailBlocks) {
        totalUsed += (width * width);
        levels++;
        width += 2;
    }

    std::cout << levels << std::endl;

    return 0;
}