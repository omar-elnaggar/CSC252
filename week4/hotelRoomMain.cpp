#include <iostream>
#include "HotelRoom.cpp"

using namespace std;

int main(){
    HotelRoom room;

    try {
        room.setRate(-200.0);
    } catch(invalid_argument& ex){
        cout << ex.what() << endl;
    }

    cout << room.toString();

    return 0;
}
