#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0; // Initialize a counter variable to 0
    
    printf("Enter a string:\n");
    char st[20];
    scanf("%s", st);

    printf("Enter a character to count its occurrences:\n");
    char ch;
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == ch) // Check if the character at index i is equal to the input character
        {
            count++; // Increment the counter if a match is found
        }
    }
    if (count == 0) // Check if the character was not found in the string
    {
        printf("The character '%c' does not appear in the string.\n", ch); // Print a message indicating no occurrences
    }
    else
    {
    printf("The character '%c' appears %d times in the string.\n", ch, count); // Print the count of occurrences
    }

    return 0;
}