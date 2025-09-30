#include "defs.h"

/*
This is a function to generate the Fibonacci numbers
we set the first 2 to be 0 and 1
then for loop the array starting at 2 find f(n) by doing f(n-1) + f(n-2)
*/
int* generateFibonacci(int *arr, int size) {

    // f(n) = f(n-1) + f(n-2)
if(size >= 2) {
    arr[0] = 1; // Initialize the first value to be 1
    arr[1] = 1; // Initalize the first value to be 1
    
    for (int i = 2; i < size; i++) {
        arr[i] = arr[i -1] + arr[i - 2]; // Calculating the Fibonacci number
    }
    return arr;
}
else { // for size < 2
    arr[0] = 1;
    arr[1] = 1; 
    return arr;
}


}
