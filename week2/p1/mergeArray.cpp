#include <iostream>

using namespace std;

// merges two sorted arrays into one sorted array
int* mergeArrays(int* array1, int size1, int* array2, int size2);
// loop through array and print each element
void printArray(int* arr, int size);

int main(){

    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[5] = {5,6,7,8,9};

    cout << "Array 1: ";
    printArray(array1, 10);
    cout << endl;
    cout << "Array 2: ";
    printArray(array2, 5);
    cout << endl;

    int *result = mergeArrays(array1, 10, array2, 5);

    cout << "Merged array" << endl;
    printArray(result, 15);

    cout << endl;

    delete result;

    return 0;
}

int* mergeArrays(int* array1, int size1, int* array2, int size2){
    int *mergedArray = new int[size1 + size2]; // generate a new integer array of appropriate size
    int i = 0; // array1 index
    int j = 0; // array2 index
    int k = 0; // mergedArray index

    // iterate over each element in the arrays and merge them into one array in ascending order
    while (i < size1 && j < size2){ // continue until we reach the end of an array
        if (array1[i] < array2[j]){ // check to see if current element is smaller than the next element in array2
            mergedArray[k] = array1[i]; // if so add to mergedArray and increment
            k++;
            i++;
        } else {
            mergedArray[k] = array2[j]; // else add element in array2 to mergedArray and increment
            k++;
            j++;
        }
    }
    // finish remainder of arrays
    while (i < size1){
        mergedArray[k] = array1[i];
        k++;
        i++;
    }
    while (j < size2){
        mergedArray[k] = array2[j];
        k++;
        i++;
    }

    return mergedArray; // return point of the index
    
}

void printArray(int* arr, int size){
    
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
