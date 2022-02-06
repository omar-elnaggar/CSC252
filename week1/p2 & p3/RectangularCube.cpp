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
int RectangularCube::getWidth(){return width;}
int RectangularCube::getHeight(){return height;}
// Make sure to include at least one inline function implementation.
inline int RectangularCube::getLength(){return length;}

void RectangularCube::setWidth(int width){this->width = width;}
void RectangularCube::setHeight(int height){this->height = height;}
void RectangularCube::setLength(int length){this->length = length;}

// Finally define the functions volume ()
// V = lwh
int RectangularCube::volume(){
    return length * width * height;
}

// surfaceArea ()
// Surface = 2lw + 2lh + 2wh
int RectangularCube::surfaceArea(){
    return 2 * length * width +  2 * length * height + 2 * width * height;
}


