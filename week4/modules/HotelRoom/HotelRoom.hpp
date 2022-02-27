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
        virtual std::string toString() const;
        virtual double calculateBill() const;
        // Write the function displayHotelRoom() that receive a base class type reference as a parameter, then invokes the functions calculateBill() and toString().
        //  The function must return void. [10pts]
        void displayHotelRoom(HotelRoom* hotelRoom);

};

#endif
