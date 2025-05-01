#include <stdio.h>

int sum(int*, int*);
// sum should change value of x as it is passed by reference

int sum(int*a, int* b){
    *a =6;
    return *a + *b;
}

int main(){
    int x = 1, y = 6;
    printf("the of x and y is %d\n", sum(&x, &y));
    printf("the of x is %d\n", x);
    return 0;
}