#include <stdio.h>

int main(){
    printf("enter a variable to know its address\n");
    int a;
    scanf("%d", &a);
    printf("the address of %d is %p\n", a, (void*)&a);
    
    return 0;
}