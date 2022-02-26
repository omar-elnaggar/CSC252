#ifndef MEETINGROOM_H
#define MEETINGROOM_H
#include "HotelRoom.cpp"

// c.	Derive the classes MeetingRoom form the base class HotelRoom. The class has the following private data filed sand public functions:
class MeetingRoom : public HotelRoom {
    private:
        // a.	A private data field seats, which represents the number of seats in the room. [1pts]
        int seats;
        // b.	An integer data field status (1 if the room is booked and 0 otherwise). [1pts]
        int status;
    public:
        // c.	Add constructors and get/set functions to the GuestRoom class. [2pts]
        MeetingRoom();
        MeetingRoom(int number, double rate, int seats, int status);

        int getSeats() const;
        int getStatus() const;

        void setSeats(int seats);
        void setStatus(int status);

        // d.	 Redefine the function toSting()  to format and return a string containing all pertinent information about the MeetingRoom. [4pts]
        string toString() const;

        
        // e.	The function CalculateBill(), which returns the amount of the bill
        // for renting the room for one day. The function calculates the bill as follows: the number of seats multiplied by 10.00, plus 500.00.  [4pts]
        double calculateBill() const;
};

#endif