#include <iostream>
#include "RectangularCube.cpp"

using namespace std;

void printCube(RectangularCube rc);

int main(){
    // Write a main program and declare an array of 5 RectangularCube objects
    RectangularCube cubes[5];
    srand(time(NULL));

    // Use a loop to initialize an array of RectangularCube. 
    for(int i = 0; i < 5; i++){
        // In the body of the loop use the rand () function to generate random integers
        // between 1 and 10 to assign to length, width and height data fields of each RectangularCube object
        cubes[i] = RectangularCube((rand() % 10) + 1, (rand() % 10) + 1, (rand() % 10) + 1);
    }

    // Use a loop to display individual elements of the array in part (a) by calling the function printCube in part (b) 
    for(int i = 0; i < 5; i++){
        cout << "Cube " << i << ": ";
        printCube(cubes[i]);
    }

    
    

    return 0;
}

// Write the function with header void printCube (RectangularCube rc) that receives an object of the type RectangularCube
// and displays the length, width, height, volume and the surface area of the cube like: L = 2, W = 1, H = 1, V = 2, A = 8
void printCube(RectangularCube rc) {
        printf("L = %d, W = %d, H = %d, V = %d, A = %d\n", rc.getLength(), rc.getWidth(), rc.getHeight(), rc.volume(), rc.surfaceArea());
    }