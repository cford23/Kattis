#include <iostream>

int main() {
    char grade;
    int a, b, c, d, e, score;

    std::cin >> a >> b >> c >> d >> e;
    std::cin >> score;

    if (score >= a)
        grade = 'A';
    else if (score >= b)
        grade = 'B';
    else if (score >= c)
        grade = 'C';
    else if (score >= d)
        grade = 'D';
    else if (score >= e)
        grade = 'E';
    else
        grade = 'F';
    
    std::cout << grade << std::endl;

    return 0;
}