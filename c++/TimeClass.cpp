#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
    public:
    //constructor
    Triangle(float a,float b,float c){
        float s;
        s=(a+b+c)/2;
        cout<<"Area of triangle :"<<sqrt(s*(s-a)*(s-b)*(s-c))<<"\n";
    }
};
class Square{
    public:
    Square(float a){
        cout<<"Area of square:"<<a*a<<"\n";
    }
};
class Circle{
    public:
    Circle(float r){
        cout<<"Area of circle:"<<3.14*r*r<<"\n";
    }
};
int main(){
    float a,b,c,d,e;
    cout<<"enter three sides of triangle:";
    cin>>a>>b>>c;
    Triangle obj1(a,b,c);
    cout<<"enter side of square:";
    cin>>d;
    Square obj2(d);
    cout<<"enter radius of circle:";
    cin>>e;
    Circle obj3(e);
    return 0;
}