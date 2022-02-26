#ifndef GUESTROOM_H
#define GUESTROOM_H
#include "HotelRoom.cpp"

// b.	Derive the classes GuestRoom form the base class HotelRoom. The GuestRoom has private data fields and public functions:
class GuestRoom : public HotelRoom {
    private:
        int capacity; // The private data field capacity (an Integer) that represents the maximum number of guests that can occupy the room. [1pts]
        int status; // The private data member status (an integer), which represents the number of guests in the room (0 if unoccupied). [1pts]
        int days; // An integer data field days that represents the number of days the guests occupies the room. [1pts]
    public:
    // d.	Add constructors and get/set functions to the GuestRoom class.
    
        GuestRoom();
        GuestRoom(int capacity, int status, int days, int rate, int number);

        inline int getCapacity() const;
        inline int getStatus() const;
        inline int getDays() const;

        void setCapacity(int capacity);
        // The set function for the status data member must throw an out_of_range exception if it tries to set status to value greater than the capacity. [6pts] 
        void setStatus(int status);
        void setDays(int days);

        // The function calculateBill() that returns the amount of guest’s bill. [2pts]
        double calculateBill() const;

        // Redefine the function toString() that formats and returns a string containing all pertinent information about the GuestRoom. [3pts]
        string toString() const;
};

#endif
