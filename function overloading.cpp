#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Circle
    void area(float radius) {
        cout << "Area of Circle (r=" << radius << "): " << 3.14159 * radius * radius << endl;
    }

    // Rectangle
    void area(float length, float width) {
        cout << "Area of Rectangle (" << length << "x" << width << "): " << length * width << endl;
    }

    // Triangle
    void area(float base, float height, int halfFlag) {
        cout << "Area of Triangle (b=" << base << ", h=" << height << "): " << 0.5 * base * height << endl;
    }
};

int main() {
    AreaCalculator calc;

    // Random creative calls (function overloading in action)
    calc.area(7.0f);              // Circle with radius
    calc.area(5.0f, 10.0f);       // Rectangle
    calc.area(6.0f, 8.0f, 1);     // Triangle

    return 0;
}