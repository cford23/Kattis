#include <iostream>

int main() {
    struct Point {
        int x;
        int y;
    };
    Point point1, point2, point3, point4;

    std::cin >> point1.x >> point1.y;
    std::cin >> point2.x >> point2.y;
    std::cin >> point3.x >> point3.y;
    
    // Figure out which two points share the same x line
    if (point1.y == point2.y) {
        // Point1 and Point2 are on same x

        // Figure out which point shares the same y line
        if (point1.x == point3.x) {
            point4.x = point2.x;
            point4.y = point3.y;
        }
        else if (point2.x == point3.x) {
            point4.x = point1.x;
            point4.y = point3.y;
        }
    }
    else if (point1.y == point3.y) {
        // Point1 and Point2 are on same x
        
        // Figure out which point shares the same y line
        if (point1.x == point2.x) {
            point4.x = point3.x;
            point4.y = point2.y;
        }
        else if (point3.x == point2.x) {
            point4.x = point1.x;
            point4.y = point2.y;
        }
    }
    else if (point2.y == point3.y) {
        // Point2 and Point3 are on same x

        // Figure out which point shares the same y line
        if (point2.x == point1.x) {
            point4.x = point3.x;
            point4.y = point1.y;
        }
        else if (point3.x == point1.x) {
            point4.x = point2.x;
            point4.y = point1.y;
        }
    }
    
    std::cout << point4.x << " " << point4.y << std::endl;

    return 0;
}