//program to print the address of the third element of an array using pointer arithmetic 

#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = a; // pointer to the first element of the array
    printf("The value at address %u is %d\n", ptr+2, *(ptr+2));

    return 0;
}