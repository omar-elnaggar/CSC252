#include <iostream>
#include <string>

using namespace std;

template<typename T>
int binarySearch(const T list[], T key, int listSize);

template<typename T>
void printArray(const T list[], int listSize);

int main(){

    int intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double doubleArray[10] = {0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5};
    string stringArray[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    cout << "intArray: ";
    printArray(intArray, 10);
    cout << "doubleArray: ";
    printArray(doubleArray, 10);
    cout << "stringArray: ";
    printArray(stringArray, 10);

    int intResult = binarySearch(intArray, 5, 10);
    int doubleResult = binarySearch(doubleArray, 2.5, 10);
    int stringResult = binarySearch(stringArray, (string)"0", 10);

    cout << "Int 5 at: " << intResult << endl;
    cout << "Double 2.5 at: " << doubleResult << endl;
    cout << "String \"0\" at: "<< stringResult << endl;

    return 0;
}

template<typename T>
int binarySearch(const T list[], T key, int listSize){
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

template<typename T>
void printArray(const T list[], int listSize){
    for (int i = 0; i < listSize; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}
