#include <iostream>
#include <vector>
#include "Robot.cpp"

using namespace std;

int main(){ 
    vector<Robot> robots;

    for (int i=0; i < 5; i++)
        robots.push_back(Robot());

    cout << "Robot 1: " << endl;
    robots[0].printRobot();
    robots[0].setLoad('A');
    robots[0].moveTo(10, 20);
    robots[0].printRobot();

    cout << "Robot 2: " << endl;
    robots[1].printRobot();
    robots[1].setLoad('B');
    robots[1].moveTo(3, 5);
    robots[1].printRobot();

    cout << "Robot 3: " << endl;
    robots[2].printRobot();
    robots[2].setLoad('C');
    robots[2].moveTo(12, 24);
    robots[2].printRobot();

    return 0;
}