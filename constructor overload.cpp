// EXPERIMENT-13
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class add{
    
    //int a,b,c,d,e;
    //float f,g;
    
public:

add(int a,int b){
    cout<<"The sum of the numbers using add(int a,int b) is: "<<a+b<<endl;
}

add(int c,int d,int e){
    cout<<"The sum of the numbers using add(int c,int d,int e) is: "<<c+d+e<<endl;
}

add(float f, float g){
    cout<<"The sum of the numbers using add(float f, float g) is: "<<f+g<<endl;
}

};

int main() {
    int a,b,c,d,e;
    float f,g;
    add x;
    cout<<"Enter the value for a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value for b: ";
    cin<<b;
    cout<<endl;
    
    x.add(a,b);
    cout<<endl;
    
    cout<<"Enter the value for c: ";
    cin<<c;
    cout<<endl;
    cout<<"Enter the value for d: ";
    cin<<d;
    cout<<endl;
    cout<<"Enter the value for e: ";
    cin<<e;
    cout<<endl;
    
    x.add(c,d,e);
    cout<<endl;
    
    cout<<"Enter the value for f: ";
    cin<<f;
    cout<<endl;
    cout<<"Enter the value for g: ";
    cin<<g;
    cout<<endl;
    
    x.add(f,g);
    cout<<endl;
    

    return 0;
}
