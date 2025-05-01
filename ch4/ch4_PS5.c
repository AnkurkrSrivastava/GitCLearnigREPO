#include <stdio.h>

int main(){
    int i = 1;
    while (i<=10)
    {
        printf("the sum of first %d natural numbers is %d\n", i, (i*(i+1))/2);
        i++;
    }
    
    return 0;
}