#include <stdio.h>

int main(){
    printf("Enter a number for which you want to multiplication table:\n");
    int n;
    scanf("%d" ,&n);
    printf("Multiplication table of %d is:\n", n);
    for (int i = 0; i <=10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}