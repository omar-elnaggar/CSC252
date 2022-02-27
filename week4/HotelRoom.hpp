#ifndef HOTELROOM_HPP
#define HOTELROOM_HPP
#include <iostream>
#include <string>

class HotelRoom {
    private:
        int number;
        double rate;
    public:
        HotelRoom();
        HotelRoom(int number, double rate);

        void setRate(double rate);
        void setNumber(int number);

        int getNumber() const;
        double getRate() const;

        virtual std::string toString() const;

};

#endif
