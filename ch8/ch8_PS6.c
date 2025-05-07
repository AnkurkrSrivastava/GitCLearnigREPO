// Description: This program encrypts(in the form of ASCII code) a string by incrementing each character by 1 and prints the encrypted string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "I'll concuer the world!";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1; // Increment each character by 1
    }
    printf("encrypted code is: %s\n", str); // Print the modified string

    return 0;
}