#include <iostream>
#include <string>

#include "MeetingRoom.hpp"

using namespace std;

// c.	Add constructors and get/set functions to the GuestRoom class. [2pts]
MeetingRoom::MeetingRoom() : HotelRoom() {
    status = 0;
    seats = 0;
}
MeetingRoom::MeetingRoom(int number, double rate, int seats, int status) : HotelRoom(number, rate) {
    this->status = status;
    this->seats = seats;
}

inline int MeetingRoom::getSeats() const { return seats; }
inline int MeetingRoom::getStatus() const { return status; }

void MeetingRoom::setSeats(int seats){
    this->seats = seats;
}
void MeetingRoom::setStatus(int status){
    this->status = status;
}

// d.	 Redefine the function toSting()  to format and return a string containing all pertinent information about the MeetingRoom. [4pts]
string MeetingRoom::toString() const{
    string sstatus = getStatus() == 1 ? "Open" : "Reserved";
    return "Room Number: " + to_string(this->getNumber())
     + "\nRate: $" + to_string(this->getRate()) 
     + "\nSeats: " + to_string(this->getSeats())
     + "\nStatus: " + sstatus;
}


// e.	The function CalculateBill(), which returns the amount of the bill
// for renting the room for one day. The function calculates the bill as follows: the number of seats multiplied by 10.00, plus 500.00.  [4pts]
double MeetingRoom::calculateBill() const{
    return getSeats() * 10.00 + 500.00;
}
