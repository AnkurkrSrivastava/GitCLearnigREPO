#include <stdio.h>
#include <string.h>

int main(){
    char st[6];
    printf("Enter a string:\n ");
    scanf("%s", st);
    strlen(st);
    printf("Length of the string is: %d\n", strlen(st));

    return 0;
}