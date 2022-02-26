#include "HotelRoom.h"
#include <iostream>
#include <string>

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

inline int HotelRoom::getNumber() const { return number; }
inline double HotelRoom::getRate() const { return rate; }

string HotelRoom::toString() const {
    return "Room: " + to_string(this->number) + "\nRate: $" + to_string(this-> rate) + "\n";
};
