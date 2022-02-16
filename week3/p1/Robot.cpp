#include <iostream>
#include "Robot.h"
using namespace std;

Robot::Robot(){
    xlocation = 0;
    ylocation = 0;
    cargoBed = false;
    load = '0';
}

void Robot::setX(int x){ xlocation = x; }
void Robot::setY(int y){ ylocation = y; }
inline int Robot::getX(){ return xlocation; }
inline int Robot::getY(){ return ylocation; }

void Robot::setCargo(bool b){
    cargoBed = b;
    if (!cargoBed){
        load = '0';
    }
}

inline bool Robot::getCargo() { return cargoBed; }

void Robot::setLoad(char l){ 
    load = l;
    cargoBed = true;
}

inline char Robot::getLoad(){ return load; }

// The moveTo(int x, int y) function checks the current position of the Robot at (xLocation, yLocation)
// then using loops moves the Robot ( one unit at a time) to the new location given by parameters x and y.
bool Robot::moveTo(int x, int y){
    while (xlocation != x || ylocation != y){
        if (xlocation < x){
            xlocation++; // move right
            continue; // move x first
        } else if (xlocation > x) {
            xlocation--; // move left
            continue; // move x first
        }

        if (ylocation < y){
            ylocation++; // move up
        } else if (ylocation > y) {
            ylocation--; // move down
        }
    }
    return true;
}

void Robot::printRobot(){
    cout << "x: " << xlocation << " y: " << ylocation << " cargo: " << cargoBed << " load: " << load << endl;
}