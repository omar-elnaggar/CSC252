#include <iostream>
#include <string>

#include ".\modules\MeetingRoom\MeetingRoom.hpp"
#include ".\modules\GuestRoom\GuestRoom.hpp"

using namespace std;

// d.	Write a main function to test the classes GuestRoom and MeetingRoom. Invoke the calculateBills and toStirng() in each of the objects. [8pts]
int main(){
    GuestRoom guestRoom(2, 1, 2, 40.5, 30);
    MeetingRoom meetingRoom(20, 50.00, 30, 1);

    cout << "Meeting Room" << endl;
    cout << meetingRoom.toString() << endl;
    cout << "Bill: $" << meetingRoom.calculateBill() << endl;

    cout << "================================" << endl;

    cout << "Guest Room" << endl;
    cout << guestRoom.toString() << endl;
    cout << "Bill: $" << guestRoom.calculateBill() << endl;

    return 0;
}
