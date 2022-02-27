#include <iostream>
#include <string>

#include "MeetingRoom.hpp"
#include "GuestRoom.hpp"

using namespace std;

// d.	Write a main function to test the classes GuestRoom and MeetingRoom. Invoke the calculateBills and toStirng() in each of the objects. [8pts]
int main(){
    GuestRoom guestRoom(2, 1, 2, 40.5, 30);
    MeetingRoom meetingRoom(20, 50.00, 30, 1);

    cout << "Meeting Room" << endl;
    cout << meetingRoom.toString() << endl;

    cout << "================================" << endl;

    cout << "Guest Room" << endl;
    cout << guestRoom.toString() << endl;

    return 0;
}