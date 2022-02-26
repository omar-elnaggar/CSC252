#ifndef HOTELROOM_H
#define HOTELROOM_H
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

        inline int getNumber() const;
        inline double getRate() const;

        virtual std::string toString() const;

};

#endif
