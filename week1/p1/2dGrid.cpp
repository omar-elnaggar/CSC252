#include <iostream>
#include "Grid.h"

using namespace std;

int main(){

    // Write a main function in which an object of the type Grid is created
    Grid grid;

    // then print the value of the element in location (3, 5)
    cout << "Element at location [3, 5]: " << grid.getElement(3,5) << endl;
    
    // next set the value of the element in location (3, 5) to 100
    cout << "Updating element at location [3, 5] to 100" << endl;
    grid.setElement(3,5, 100);

    // print the new value.
    cout << "Element at location [3, 5]: " << grid.getElement(3,5) << endl;

    return 0;
}