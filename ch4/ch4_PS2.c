#include <stdio.h>

int main(){
    int n=10;
    printf("Multiplication table of %d in reverse order is:\n", n);
    for (int i=10; i >=0; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}