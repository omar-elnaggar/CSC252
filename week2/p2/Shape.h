#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "Circle.h"
using namespace std;

class Shape{
    private:
        Circle* circles; // Circles is a Circle pointer, it will point to a collection of circles.
        int numberOfCircles; // NumberOfCircles gives the current number of Circle objects present in the list.
        int capacity; // Capacity is the maximum number of Circle objects allowed in the list.
    public:
        Shape(int capacity){
            numberOfCircles = 0;
            this->capacity = capacity;
            circles = new Circle[capacity];
        }

        ~Shape(){
            delete circles;
        }

        // Shape(const Shape& RHS) is the copy constructor.
        Shape(const Shape &RHS){
            cout << "Copy constructor executing\n";
            numberOfCircles = RHS.getNumberOfCircles();
            capacity = RHS.getNumberOfCircles() + 1;
            circles = new Circle[capacity];
            circles = RHS.getCircles();

        }

        void addCircle(Circle c){
            if(numberOfCircles < capacity){
                circles[numberOfCircles++] = c;
            } else {
                cout << "Reached capacity of circles: " << capacity << endl;
            }
        }

        // The getCircles(), returns the pointer to the circles. 
        inline Circle* getCircles() const { return circles; }

        inline int getNumberOfCircles() const { return numberOfCircles; }

        // Print() function displays all the circles in the Shape object
        const void print(){
            for (int i = 0; i < numberOfCircles; i++){
                circles[i].print();
            }
        }

};

#endif
