#include <stdio.h>

int returning(int* ptr){
    printf("the address of the ptr is %p\n", ptr);
    printf("the value of the ptr is %d\n", *ptr);
}

int main(){
    printf("enter a variable to know its address\n");
    int i;
    scanf("%d", &i);
    int* ptr = &i;
    printf("the address of %d is %p\n", i, (void*)&i);
    returning(ptr);
    return 0;
}