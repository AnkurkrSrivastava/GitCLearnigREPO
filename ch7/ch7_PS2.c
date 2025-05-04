#include <stdio.h>

int main(){
    int a[10];
    for (int i = 0; i <=10 ; i++)
    {
        a[i] = 5 * i;
    }
    // a[3] = 5 + 3;  this line is not necessary, but it shows how to change the value of an array element
    for (int i = 0; i <= 10; i++)
    {
        printf("The value of 5 x %d = %d\n", i, a[i]);
    }
    
    
    return 0;
}