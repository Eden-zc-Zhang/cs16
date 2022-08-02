//DO NOT MODIFY THIS FILE

void printArray(int arr[], int size);
// Pre-Condition: takes in an integer array and its size.
// Post-Condition: prints all elements in the array in the following format:
//  {       10      9       8       7       8       9       0       }
//  ie: {\t
//          array_value\t
//      } << endl
// \t is the "tab" character. This is the same format as done in class.

int indexOfSmallest(int arr[], int size);
// Pre-Condition: takes in an integer array and its size.
// Post-Condition: returns the index of the minimum number in the array.

int indexOfLargest(int arr[], int size);
// Pre-Condition: takes in an integer array and its size.
// Post-Condition: returns the index of the maximum number in the array.

void upSort(int arr[], int size);
// Pre-Condition: takes in an integer array and its size.
// Post-Condition: Sorts the array in ascending order (smallest to largest)

void downSort(int *arr, int size);
// Pre-Condition: takes in an integer array and its size.
// Post-Condition: Sorts the array in descending order (largest to smallest)

void numFrequency(int arr[], int size);
// Pre-Condition: takes in an integer array and its size
// Post-Condition: Calls previous functions to print the input array, sort it in ascending order, 
// print the sorted array, and print the ammount of times each value occurs in the array.
/* EXAMPLE OUTPUT:
Original Array: 
{       10      9       8       7       8       9       0       }
Sorted in Ascending Order: 
{       0       7       8       8       9       9       10      }
The frequency of 0 is: 1
The frequency of 7 is: 1
The frequency of 8 is: 2
The frequency of 9 is: 2
The frequency of 10 is: 1
*/


// The following function is defined for you. Do not change it AT ALL.
// Pre-Condition: takes in an ifstream object for input file, a string for an input filename, an integer array and its size
// Post-Condition: the array will be populated with all the numbers from the input file
void getArray(ifstream& in, string fname, int arr[], int size)
{
    in.open(fname);
    if ( in.fail() ) 
    { 
        cerr << "Input file opening failed.\n"; 
        exit(1); 
    }
    for (int i = 0; i < size; i++)
    {
        in >> arr[i];
    }
}
