// Eden Zhang   Perm No.9773227

#include <iostream> // for cout, cin
#include <fstream>  // for ifstream
#include <cstdlib>  // for exit
using namespace std;
#include "headers.h"    // contains the function declarations
#include "constants.h"  // contains 4 global variables

int main(int argc, char *argv[]){
    // DO NOT MODIFY THESE NEXT 3 LINES - DO NOT ADD TO THEM
    ifstream ifs;
    int size = MAXSIZE, array[MAXSIZE];
    getArray(ifs, FILENAME, array, size);

    // hints for the tasks: 
    // all that needs to be in here is simple calls the functions, like these: 
    // in addition to, some print to std.out statements.
    // 
    // Your main() will ideally look clean and uncluttered and be made up
    // mostly of function calls.
    // 
    // Example:
    // ...
    // printArray(array, size);
    // max = indexOfLargest(array, size);
    // min = indexOfSmallest(array, size);
    // ...
    // ...etc...
    

    // PUT MISSING CODE HERE

    numFrequency(array, size);

    return 0;
}

void printArray(int arr[], int size){
    cout << "{\t";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    cout << "}" << endl;
}

int indexOfSmallest(int arr[], int size){
    int minimum = arr[0];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
            index = i;
        }
    }

    return index;
}

int indexOfLargest(int arr[], int size){
    int maximum = arr[0];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
            index = i;
        }
    }

    return index;
}

void upSort(int arr[], int size){
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void downSort(int arr[], int size){
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void numFrequency(int arr[], int size){
    cout << "Original Array: \n";
    printArray(arr, size);

    upSort(arr, size);

    cout << "Sorted in Ascending Order: \n";
    printArray(arr, size);

    for (int i = 0; i < size; i++) {
        int freq = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i] && j < i) {
                freq = 0;
                break;
            }
            else if (arr[j] == arr[i]) {
                freq++;
            }
        }

        if (freq != 0) {
            cout << "The frequency of " << arr[i] << " is: " << freq << endl;
        }
    }
}