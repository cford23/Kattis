#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;

    int leftLineCount = 0;
    int rightLineCount = 0;
    int k = 0;

    // Get number of lines on left side
    while (word[k] != '(') {
        leftLineCount++;
        k++;
    }

    // Get number of lines on right side
    k = word.length() - 1;
    while (word[k] != ')') {
        rightLineCount++;
        k--;
    }

    if (leftLineCount == rightLineCount)
        std::cout << "correct" << std::endl;
    else
        std::cout << "fix" << std::endl;

    return 0;
}