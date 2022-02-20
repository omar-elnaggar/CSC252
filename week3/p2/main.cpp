#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

template<typename T>
int binarySearch(vector<T> list, T key, int listSize);
void selectionSortFour(vector<string> &id, vector<string> &first, vector<string> &last, vector<int> &points);

int main(){

    // Phase A:

    // (1)	Read all input records one by one into parallel vectors in main memory. [3pts]
    vector<string> memberId(8), memberFirst(8), memberLast(8);
    vector<int> memberPoints(8);

    ifstream input("csc252h23in.txt");

    for (int i = 0; i < 8; i++){
        input >> memberId[i] >>  memberFirst[i] >> memberLast[i] >> memberPoints[i];
    }

    input.close();


    // (2)	Display all the records on the screen in the order they are read from the input data file. [2pts]
    for (int i = 0; i < 8; i++){
        cout << memberId[i] << " " << memberFirst[i] << " " << memberLast[i] << " " << memberPoints[i] << endl;
    }

    // (3)	Do a Selection Sort to sort the records in ascending order on MEMBER_ID and display all
    // the full records correctly in the correct order after sorting.[6pts]
    selectionSortFour(memberId, memberFirst, memberLast, memberPoints);
    
    // Phase B:

    // (1)	Then, the user can do the following until he/she quits: [2pts]
    string userInput;
    int member, points = 0;
    while (userInput != "-1"){
        cout << "Enter the member ID to modify the balance (-1 to quit): ";
        cin >> userInput;
    // (1a) Search for a member by MEMBER_ID [2pts]
    member = binarySearch(memberId, userInput, memberId.size());
        
    /* (1b) If the search MEMBER_ID is found, then after (1a), the system displays the complete information
     of this member on the screen. Then, the user can either subtract or add a particular number of points
     (a integer) to update the current BALANCE of this member once. [5pts]
     (1c) If the search MEMBER_ID is not found, then after (1a), the system displays the message
     “Member not found.” [2pts] */
     if (member >= 0){
         cout << memberId[member] << " " << memberFirst[member] << " " << memberLast[member] << " " << memberPoints[member] << endl;
         cout << "Add or subtract points (-10, 10): ";
         cin >> points;
         memberPoints[member] += points;
     } else if (userInput != "-1") {
         cout << "Member not found." << endl;
     } else {
         cout << "Updating records..." << endl;
     }

    }

    /* (2)	When the user chooses to quit Phase B Step (1), the system writes all records with the current values
     for the data fields from the parallel vectors (from slots 0 to the last slots with data) into a new output
     file in the same folder and the file name is to be “csc252hw3out.txt.” The record format is to be the same
     record format as the input file. We expect the order of records in this new file to be in ascending order
     on MEMBER_ID. [4pts] */
    ofstream output;

    output.open("csc252hw3out.txt");

    for (int i = 0; i < 8; i++){
        output << memberId[i] << " " << memberFirst[i] << " " <<  memberLast[i] << " " <<  memberPoints[i] << endl;
    }

    output.close();
    
    // The system displays “Updating of records done and the new file is: csc252hw3out.txt” [1pts]
    cout << "Updating of records done and the new file is: csc252hw3out.txt" << endl;


    return 0;
}

void selectionSortFour(vector<string> &id, vector<string> &first, vector<string> &last, vector<int> &points){
    int min;
    for (int i = 0; i < id.size() - 1; i++){
        min = i;
        for (int j = i + 1; j < id.size(); j++){
            if (id[j].compare(id[min]) < 0){
                min = j;
            }
        }
        swap(id[min], id[i]);
        swap(first[min], first[i]);
        swap(last[min], last[i]);
        swap(points[min], points[i]);
    }
}

template<typename T>
int binarySearch(vector<T> list, T key, int listSize){
    int low = 0;
    int high = listSize - 1;

    while(high >= low){
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -low - 1;
}