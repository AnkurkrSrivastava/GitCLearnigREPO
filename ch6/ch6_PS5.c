#include <stdio.h>

int main(){
    printf("enter a variable to know its address\n");
    int a;
    scanf("%d", &a);
    int* ptr1 = &a; 
    int** ptr2 = &ptr1;

    printf("the address of %d is %p\n", a, (void*)&a);
    printf("the value of %d is %d\n", a, *ptr1);
    printf("The value of %d is %d\n", a, **ptr2);
    return 0;
}