#include <iostream>
#include "RectangularCube.cpp"

using namespace std;

int main(){

    // Create two objects, one object using the no-argument constructor
    // another using the constructor with parameters (pick any values for the L, W, and H)
    RectangularCube objectA;
    RectangularCube objectB(10, 10, 10);

    // Invoke the volume ()
    // and SurfaceArea () functions on both object and display their returned value
    // objectA
    cout << "Object A" << endl;
    cout << "Volume: " << objectA.volume() << endl;
    cout << "SurfaceArea: " << objectA.surfaceArea() << endl;
    // objectB
    cout << "Object B" << endl;
    cout << "Volume: " << objectB.volume() << endl;
    cout << "SurfaceArea: " << objectB.surfaceArea() << endl << endl;

    // part (c) Invoke a set functions on an object and change the value of one of the sides
    // get height
    cout << "Object A" << endl;
    cout << "Height: " << objectA.getHeight() << endl;
    // get width
    cout << "Width: " << objectA.getWidth() << endl;
    // get length
    cout << "Length: " << objectA.getLength() << endl;
    // set height
    cout << "Setting height to 5" << endl;
    objectA.setHeight(5);
    cout << "New height: " << objectA.getHeight() << endl << endl;

    // Invoke the volume () and surfaceArea () on the object in part (c) and print the returned values
    cout << "Object A" << endl;
    cout << "Volume: " << objectA.volume() << endl;
    cout << "SurfaceArea: " << objectA.surfaceArea() << endl << endl;

    // Assign (using the operator =) and anonymous RectanularCube object to the object in part (c)
    // Once again invoke the volume ()
    // and surfaceArea () functions on the object in part (c)
    cout << "Assigning an anonymous RectangularCube object to Object A" << endl;
    objectA = RectangularCube();
    cout << "Object A" << endl;
    cout << "Volume: " << objectA.volume() << endl;
    cout << "SurfaceArea: " << objectA.surfaceArea() << endl;


    return 0;
}