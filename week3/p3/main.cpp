#include "RectangularCube.cpp"
#include <iostream>

using namespace std;

// (e)	Write a main function to test the overloaded operators. [9pts]
int main(){
    RectangularCube cubeA(5, 10, 15);
    RectangularCube cubeB(25, 32, 20);

    // (a)	Overload the output operator “<<” 
    // to print its length, width, height, volume and surface area.
    cout << "(a)" << endl;
    cout << "cubeA: " << cubeA << endl;
    cout << "cubeB: " << cubeB << endl;
    cout << endl;

    // (b)	Overload the operator “<” 
    cout << "(b)" << endl;
    if (cubeA < cubeB){
        cout << "Cube A is smaller than Cube B." << endl;
    } else {
        cout << "Cube A is larger than Cube B." << endl;
    }
    cout << endl;

    // (c)	Overload the operator+ 
    cout << "(c)" << endl;
    cout << "The sum of the volumes of Cube A and Cube B is " << (cubeA + cubeB) << endl;
    cout << endl;

    // (d)	Overload the subscript operator []
    // such that index 0 accesses length
    // index 1 accesses width
    // and index 2 accesses the height 
    cout << "(d)" << endl;
    cout << "Cube A:\n  Length: " << cubeA[0] << "\n  Width: " << cubeA[1] << "\n  Height: " << cubeA[2] << endl;

    return 0;
}