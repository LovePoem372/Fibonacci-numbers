
#include "defs.h"

int main(int argc, char* argv[]) {

    if(argc != 2) { // Checks to see if command line argument is 2 one for a.out other for size
        fprintf(stderr, "Incorrct argument \n"); // Print to screen if argument is not 2
        exit(1); // Exit program
    }

    int size = atoi(argv[1]); // Setting size to be the second argument entered **ascii to integer from stdlib**

    if(size <= 0) { // Check to see if size is correct
        fprintf(stderr, "Size must be greater or equal to 1 \n");
        exit(2);
    }

    int *arr = (int *) malloc(size * sizeof(int)); // Creates an array pointing towards dynamic memory

    if(arr == NULL) {
        fprintf(stderr, "Unable to allocate memory. \n"); // Quick check to see if allocation is successful.
        exit(3);
    }

    generateFibonacci(arr, size); // Function call to generate fibonacci passing the array and size
    printHistogram(arr, size); // Function call to print histogram passing the array and size

    free(arr); // free arr after print.
    arr = NULL; // re assign to NULL.
    
    return 0;

}
