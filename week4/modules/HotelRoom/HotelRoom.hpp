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


        // e.	Make changes to the HotelRoom class to implement polymorphism.
        // Add a virtual function calculateBill() that returns 0.00 and make the toString() function in the HotelRoom class a virtual function.
        virtual std::string toString() const = 0;
        virtual double calculateBill() const = 0;

};

#endif
