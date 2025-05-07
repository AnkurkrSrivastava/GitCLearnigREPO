// C program to decrypt(ASCII code to readable format) a string by decrementing each character by 1

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "J(mm!dpodvfs!uif!xpsme";
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] - 1; // Decrement each character by 1
    }
    printf("decrypted code is: %s\n", str); // Print the modified string
    return 0;
}