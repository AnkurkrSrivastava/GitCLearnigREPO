#include <stdio.h>

float average(int a, int b, int c){
    return (a + b + c) / 3.0;
}

int main(){
    int a=6, b=67, c=89;
    printf("The average of %d, %d and %d is %.2f\n", a, b, c, average(a, b, c));
    
    return 0;
}
