#include <iostream>
#include <string>

#include "HotelRoom.hpp"

using namespace std;

HotelRoom::HotelRoom(){
    number = 1;
    rate = 0.0;
}

HotelRoom::HotelRoom(int number, double rate){
    if (number < 0 || rate < 0) 
        throw invalid_argument("Negative Parameter");
    this->number = number;
    this->rate = rate;
}

void HotelRoom::setRate(double rate) {
    if (rate < 0){
        throw invalid_argument("Negative Parameter");
    }
    this->rate = rate;
}

void HotelRoom::setNumber(int number) {
    if (number < 0){
        throw invalid_argument("Negative Parameter");
    }
    this->number = number;
}

int HotelRoom::getNumber() const { return number; }
double HotelRoom::getRate() const { return rate; }

string HotelRoom::toString() const {
    return "Room: " + to_string(this->getNumber()) + "\nRate: $" + to_string(this->getRate());
};

// Add a virtual function calculateBill() that returns 0.00
double HotelRoom::calculateBill() const { return 0.00; }

 // Write the function displayHotelRoom() that receive a base class type reference as a parameter, then invokes the functions calculateBill() and toString().
//  The function must return void. [10pts]
void HotelRoom::displayHotelRoom(HotelRoom* hotelRoom){
    cout << hotelRoom->toString() << endl << "Bill: $" << to_string(hotelRoom->calculateBill()) << endl;
}
