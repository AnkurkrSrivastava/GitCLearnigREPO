#include <stdio.h>

float temperature(float celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    float celsius = 27.0;
    printf("The temperature in Fahrenheit is %.2f\n", temperature(celsius));
    
    return 0;
}