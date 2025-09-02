// EXPERIMENT-13
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

class Area {
public:
    
    void area(float radius) {
        cout << "Area of Circle (r=" << radius << "): " << 3.14159 * radius * radius << endl;
    }

    
    void area(float length, float width) {
        cout << "Area of Rectangle (" << length << "x" << width << "): " << length * width << endl;
    }

    
    void area(float base, float height,int h) {
        cout << "Area of Triangle (b=" << base << ", h=" << height << "): " << 0.5 * base * height << endl;
    }
};

int main() {
    int x,y,z,a,b,c;
    Area calc;

    cout<<"Enter the radius of circle: ";
    cin>>x;
    calc.area(x); 
    cout<<endl;
    
    cout<<"Enter the lenght of rectangle: ";
    cin>>y;
    cout<<"Enter the width of rectangle: ";
    cin>>z;
    calc.area(y, z);  
    cout<<endl;
    
    cout<<"Enter the height of triangle: ";
    cin>>a;
    cout<<"Enter the base of triangle: ";
    cin>>b;
    cout<<"Enter the diagonal of triangle: ";
    cin>>c;
    calc.area(a,b,c);    

    return 0;
}

/*Output :

Enter the radius of circle: 5
Area of Circle (r=5): 78.5397

Enter the lenght of rectangle: 6
Enter the width of rectangle: 8
Area of Rectangle (6x8): 48

Enter the height of triangle: 5
Enter the base of triangle: 13
Enter the diagonal of triangle: 6
Area of Triangle (b=5, h=13): 32.5
*/





