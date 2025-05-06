#include <stdio.h>

char* slice(char str[], int m, int n)
{
    int i = 0;
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];
    
    str = ptr1;
    str[n] = '\0'; // Null-terminate the sliced string
    return str;
}

int main(){
    char str[] = "hello world";
    printf("%s", slice(str, 0, 5)); // This will print "hello"
    return 0;
}