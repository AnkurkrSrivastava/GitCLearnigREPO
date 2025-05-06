#include <stdio.h>

int main(){
    char st[30];
    char st2[30];
    printf("Enter a string1:\n ");
    scanf("%s", st);
    printf("Enter a string2:\n ");
    scanf("%s", st2);
    if (st == st2)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are different\n");
    }
  
    return 0;
}