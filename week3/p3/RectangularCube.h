// Implement the class using separate files for definition and implementation, use inclusion guard to avoid duplicate code. 
#ifndef RECTANGULARCUBE_H
#define RECTANGULARCUBE_H

#include <iostream>
using namespace std;

// Define the class RectangularCube
class RectangularCube {

    // RectangularCube has three sides length(L), width (W), and Height (h), define the sides as private data fields
private:
    int length, width, height;

public:
    // Include a no-argument constructor that sets all three sides to 1 
    RectangularCube();

    // The class must also have a constructor with parameters that receive parameters to initialize sides of the RectangularCube 
    RectangularCube(int length, int width, int height);

    // Include get and set functions for all three data fields
    inline int getWidth();
    inline int getHeight();
    inline int getLength();

    void setWidth(int width);
    void setHeight(int height);
    void setLength(int length);

    // Finally define the functions volume ()
    // V = lwh
    int volume() const;

    // surfaceArea ()
    // Surface = 2lw + 2lh + 2wh
    int surfaceArea() const;

    // (a)	Overload the output operator “<<” as a nonmember function in the Rectangularcube class to print its length, width, height, volume and surface area.
    friend ostream& operator<<(ostream& out, const RectangularCube& rectangularcube);

    /* (b)	Overload the operator “<” for the Rectangularcube class as a nonmember function. The operator should return true if the volume of the first parameter
    is less than the volume of the second parameter. Describe the purpose of a friend [5pts] */
    friend bool operator<(const RectangularCube& firstCube, const RectangularCube& secondCube);


    // (c)	Overload the operator+ as a member function. Clearly state how you define the sum of two Rectangularcube objects. Implement the operator.  [3pts]
    // Sums the volume of the two Rectangularcube objects
    friend int operator+(const RectangularCube& firstCube, const RectangularCube& secondCube);

    // (d)	Overload the subscript operator [], such that index 0 accesses length, index 1 accesses width and index 2 accesses the height of the Rectangularcube. [5pts]
    int& operator[](int index);
};


#endif