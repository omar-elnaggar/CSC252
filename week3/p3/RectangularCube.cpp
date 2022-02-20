#include "RectangularCube.h"

using namespace std;

// Include a no-argument constructor that sets all three sides to 1 
RectangularCube::RectangularCube(){
    length = 1;
    width = 1;
    height = 1;
}

// The class must also have a constructor with parameters that receive parameters to initialize sides of the RectangularCube 
RectangularCube::RectangularCube(int length, int width, int height){
    this->length = length;
    this->width = width;
    this->height = height;
}

// Include get and set functions for all three data fields
// Make sure to include at least one inline function implementation.
inline int RectangularCube::getWidth(){return width;}
inline int RectangularCube::getHeight(){return height;}
inline int RectangularCube::getLength(){return length;}

void RectangularCube::setWidth(int width){this->width = width;}
void RectangularCube::setHeight(int height){this->height = height;}
void RectangularCube::setLength(int length){this->length = length;}

// Finally define the functions volume ()
// V = lwh
int RectangularCube::volume() const{
    return length * width * height;
}

// surfaceArea ()
// Surface = 2lw + 2lh + 2wh
int RectangularCube::surfaceArea() const{
    return 2 * length * width +  2 * length * height + 2 * width * height;
}

// (a)	Overload the output operator “<<” as a nonmember function in the Rectangularcube class to print its length, width, height, volume and surface area.
ostream& operator<<(ostream& out, const RectangularCube& rectangularcube){
    out << "Length: " << rectangularcube.length
     << ", Width: " << rectangularcube.width 
     << ", Height: " << rectangularcube.height 
     << ", Volume: " << rectangularcube.volume() 
     << ", Surface Area: " << rectangularcube.surfaceArea();
    return out;
}

/* (b)	Overload the operator “<” for the Rectangularcube class as a nonmember function. The operator should return true if the volume of the first parameter
   is less than the volume of the second parameter. Describe the purpose of a friend [5pts] */
bool operator<(const RectangularCube& firstCube, const RectangularCube& secondCube){
    if (firstCube.volume() < secondCube.volume()){
        return true;
    } else {
        return false;
    }
}

// (c)	Overload the operator+ as a member function. Clearly state how you define the sum of two Rectangularcube objects. Implement the operator.  [3pts]
// Sums the volume of the two Rectangularcube objects
int operator+(const RectangularCube& firstCube, const RectangularCube& secondCube){
    return firstCube.volume() + secondCube.volume();
}

// (d)	Overload the subscript operator [], such that index 0 accesses length, index 1 accesses width and index 2 accesses the height of the Rectangularcube. [5pts]
int& RectangularCube::operator[](int index){
    int &err = index;
    switch(index){
        case 0: return length;
        case 1: return width;
        case 2: return height;
        default: return err;
    }
}
