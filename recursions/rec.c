//Program to print factorial of number with the use of recursion.

#include <stdio.h>

int factorial(int n){
    if(n==1 || n==0) return 1; //base case
    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter a number to get its factorial:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Positive numbers only");
    }
    int fact = factorial(n);
    printf("%d",fact); 
    return 0;
}