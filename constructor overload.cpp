// EXPERIMENT-13
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class add {
public:
    add(int a, int b) {
        cout << "The sum of the numbers using add(int a, int b) is: " << a + b << endl;
    }

    add(int c, int d, int e) {
        cout << "The sum of the numbers using add(int c, int d, int e) is: " << c + d + e << endl;
    }

    add(float f, float g) {
        cout << "The sum of the numbers using add(float f, float g) is: " << f + g << endl;
    }
};

int main() {
    int a, b, c, d, e;
    float f, g;

    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;

    add obj1(a, b);  // constructor called here

    cout << "Enter the value for c: ";
    cin >> c;
    cout << "Enter the value for d: ";
    cin >> d;
    cout << "Enter the value for e: ";
    cin >> e;

    add obj2(c, d, e);  // constructor called here

    cout << "Enter the value for f: ";
    cin >> f;
    cout << "Enter the value for g: ";
    cin >> g;

    add obj3(f, g);  // constructor called here

    return 0;
}
