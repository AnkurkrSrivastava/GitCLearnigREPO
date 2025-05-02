#include <stdio.h>

int calcltn(float* num1, float* num2,float* sum, float* avg){
    printf("Enter two numbers: ");
    scanf("%f %f", num1, num2);
    *sum = (*num1 + *num2);
    *avg = (*num1 + *num2) / 2;
}

int main(){
    float a, b, sum, avg;
   float result = calcltn(&a, &b, &sum, &avg); //passing address of a and b to calcltn function
    printf("Sum: %.2f\n", (a + b));
    printf("Average: %.2f\n", (a + b) / 2);

    return 0;
}