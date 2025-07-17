#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a String or number you want to encrypt: ");
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        str[i] = str[i] + 1; //Increment each character by 1
    }
    printf("Encrypted Key for the String is: %s\n", str); // Print the modified string

    return 0;
}