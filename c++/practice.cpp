#include<iostream>
using  namespace std;
class Shape
{ public: 
 virtual void area() = 0;}; 
class Circle:public Shape 
{ public: 
 void area() 
 { cout << "area of circle = pi*r*r."; } }; 
 
int main() 
{Shape *s; 
  Circle c;
  s=&c; 
 c.area();}