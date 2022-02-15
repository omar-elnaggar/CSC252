#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public :
       inline Circle() { radius = 1; }
       inline Circle( double r ) { radius = r ; }
       inline void setRadius( double r ) { radius = r ; }
       inline double getRadius() const { return radius; }
       inline double area() const { return 3.14 * pow(radius, 2.0); }
       inline void print() const
       {
              cout << "Radius = " << radius << "  area = " << area() << endl;
       }
private :
       double radius;
};

#endif
