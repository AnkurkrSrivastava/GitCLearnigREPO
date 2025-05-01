#include <stdio.h>

int main(){
    int i=8;
    int y=1;
    int z=0;
    do
    {
        printf("the sum of multiples of %d X %d plus previous multiple is %d\n", i, y, (i*y)+(i*z));
        y++;
        z++;
    } while (y<=10);
    
    return 0;
}