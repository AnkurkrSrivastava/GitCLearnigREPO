// C program to compare two strings

#include <stdio.h>

int main()
{
    char st[6];
    char st2[6];
    printf("Enter five string one by one:\n ");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &st[i]);
    }
    st[5] = '\0'; // Null-terminate the string to make it a valid C string
    printf("enter another five string one by one:\n ");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &st2[i]);
    }
    st2[5] = '\0'; // Null-terminate the string to make it a valid C string

    // Compare the two strings
    int same = 1; // Assume they are the same until proven otherwise
    for (int i = 0; i < 5; i++)
    {
        if (st[i] != st2[i])
        {
            same = 0; // They are not the same
            break;
        }
    }
    if (same)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are different\n");
    }
   

    return 0;
}