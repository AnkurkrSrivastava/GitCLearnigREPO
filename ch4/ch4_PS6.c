#include <stdio.h>

int main(){
    int i=1;
    do
    {
        printf("the sum of first %d natural numbers is %d\n", i, (i*(i+1))/2);
        i++;
    } while (i<=10);
    
    return 0;
}