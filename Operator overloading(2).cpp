// EXPERIMENT - 13
// MAITRAIYEE VASHISTHA
// PRN: 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class Vector {
private:
    int x, y, z;

public:
   
    Vector(int a = 0, int b = 0, int c = 0) {
        x = a;
        y = b;
        z = c;
    }

  
    int operator*(Vector const& v) {
        return (x * v.x + y * v.y + z * v.z);
    }

    
    void display() {
        cout << "<" << x << ", " << y << ", " << z << ">" << endl;
    }
};

int main() {
    Vector v1(2, 3, 4);
    Vector v2(1, 0, 5);

    cout << "Vector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    int dotProduct = v1 * v2;  

    cout << "Dot Product of Vector 1 and Vector 2: " << dotProduct << endl;

    return 0;
}
