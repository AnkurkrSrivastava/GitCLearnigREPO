//Same as Pratice set 3 just taking input from user 

#include <stdio.h>

int main(){
    int a[10];
    printf("Enter a number you want to get multiplication table of:");
    int b;
    scanf("%d", &b);
    for (int i = 0; i <=10 ; i++)
    {
        a[i] = b * i;
    }
    // a[3] = 5 + 3;  this line is not necessary, but it shows how to change the value of an array element
    for (int i = 0; i <= 10; i++)
    {
        printf("The value of %d x %d = %d\n", b, i, a[i]);
    }
    
    
    return 0;
}