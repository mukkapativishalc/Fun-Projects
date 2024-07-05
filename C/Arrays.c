#include <stdio.h>

int main() {
    int NumericArray[] = {1, 2, 3, 4, 5};/*declaring and initiating array*/
    int Arraysize= (sizeof(NumericArray)/sizeof(NumericArray[0]));/*here size of gives memory size
    of array hence dividing with one element size to get overall count*/
    for(int i = 0; i < Arraysize; i++) {/*looping through arrays */
        printf("Value of %d in Array at index %d\n" , NumericArray[i], i);
    }
    return 0;
}