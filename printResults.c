#include "defs.h"

/*
This is a void function to print the Histogram of the fibonacci sequence.
*/
void printHistogram(int *arr, int size) {

for (int i = 0; i < size; i++) { // Amount of time for loop is executed
    for (int j = 0; j < arr[i]; j++) { // prints the amount of * in each line
        printf("*"); 
    }
    printf("\n"); // Skips a new line 
}

}
