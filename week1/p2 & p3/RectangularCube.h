// Implement the class using separate files for definition and implementation, use inclusion guard to avoid duplicate code. 
#ifndef RECTANGULARCUBE_H
#define RECTANGULARCUBE_H

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
    int getWidth();
    int getHeight();
    int getLength();

    void setWidth(int width);
    void setHeight(int height);
    void setLength(int length);

    // Finally define the functions volume ()
    // V = lwh
    int volume();

    // surfaceArea ()
    // Surface = 2lw + 2lh + 2wh
    int surfaceArea();

};


#endif