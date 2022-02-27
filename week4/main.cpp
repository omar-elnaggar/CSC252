#include <iostream>
#include <string>

#include ".\modules\MeetingRoom\MeetingRoom.hpp"
#include ".\modules\GuestRoom\GuestRoom.hpp"

using namespace std;

// Write the function displayHotelRoom() that receive a base class type reference as a parameter, then invokes the functions calculateBill() and toString().
//  The function must return void. [10pts]
void displayHotelRoom(HotelRoom* hotelRoom);

// d.	Write a main function to test the classes GuestRoom and MeetingRoom. Invoke the calculateBills and toStirng() in each of the objects. [8pts]
int main(){
    HotelRoom hotelRoom(2, 20.0);
    GuestRoom guestRoom(2, 1, 2, 40.5, 30);
    MeetingRoom meetingRoom(20, 50.00, 30, 1);

    cout << "================================" << endl;

    cout << "Hotel Room" << endl;
    displayHotelRoom(&hotelRoom);

    cout << "================================" << endl;

    cout << "Meeting Room" << endl;
    displayHotelRoom(&meetingRoom);

    cout << "================================" << endl;

    cout << "Guest Room" << endl;
    displayHotelRoom(&guestRoom);

    cout << "================================" << endl;

    return 0;
}

 // Write the function displayHotelRoom() that receive a base class type reference as a parameter, then invokes the functions calculateBill() and toString().
//  The function must return void. [10pts]
void displayHotelRoom(HotelRoom* hotelRoom){
    cout << hotelRoom->toString() << endl << "Bill: $" << to_string(hotelRoom->calculateBill()) << endl;
}
