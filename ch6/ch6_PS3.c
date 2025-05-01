#include <stdio.h>


int ref(int* a){
    //function to take input and return 10 times the value of the input
    //a is a pointer to an integer
    printf("Enter a number to get its 10 times value:\n");
    scanf("%d", a);  //taking input
    return (*a)* 10;

}

int main(){
    int c;
    int result = ref(&c); //passing address of c to ref function
    printf("10 times the current value of %d is %d\n", c, (c)*10);

    return 0;
}