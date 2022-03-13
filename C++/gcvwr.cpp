#include <iostream>

int main() {
    int g, truckWeight, numItems, item, k, output;
    int itemWeightTotal = 0;

    std::cin >> g >> truckWeight >> numItems;

    for (k = 0; k < numItems; k++) {
        std::cin >> item;
        itemWeightTotal += item;
    }
    
    output = ((g - truckWeight) * 0.9) - itemWeightTotal;
    std::cout << output << std::endl;

    return 0;
}