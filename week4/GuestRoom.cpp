#include "GuestRoom.h"

// d.	Add constructors and get/set functions to the GuestRoom class.
GuestRoom::GuestRoom() : HotelRoom(1, 0.0){
    capacity = 0;
    status = 0;
    days = 0;
    setRate(0.0);
    setNumber(1);
}
GuestRoom::GuestRoom(int capacity, int status, int days, int rate, int number) : HotelRoom(number, rate){
    if (status > capacity){
        throw out_of_range("Status is greater than capacity");
    }
    this->capacity = capacity;
    this->status = status;
    this->days = days;
}

inline int GuestRoom::getCapacity() const { return capacity; }
inline int GuestRoom::getStatus() const { return status; }
inline int GuestRoom::getDays() const { return days; }

void GuestRoom::setCapacity(int capacity){
    this->capacity = capacity;
}
// The set function for the status data member must throw an out_of_range exception if it tries to set status to value greater than the capacity. [6pts] 
void GuestRoom::setStatus(int status){
    if (status > capacity){
        throw out_of_range("Status is greater than capacity");
    }
    this->status = status;
}
void GuestRoom::setDays(int days){
    this->days = days;
}

// The function calculateBill() that returns the amount of guest’s bill. [2pts]
double GuestRoom::calculateBill() const {
    return getDays() * getRate();
}

// Redefine the function toString() that formats and returns a string containing all pertinent information about the GuestRoom. [3pts]
string GuestRoom::toString() const {
    return "Room Number: " + to_string(this->getNumber())
     + "\nRate: $" + to_string(this->getRate()) 
     + "\nCapacity: " + to_string(this->getCapacity()) 
     + "\nStatus: " + to_string(this->getStatus())
     + "\nDays: " + to_string(this->getDays())
     + "\nBill: " + to_string(this->calculateBill());
}