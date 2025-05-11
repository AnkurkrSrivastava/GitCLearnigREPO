#include <stdio.h>
#include <string.h>

int main(){
    printf("Entert a number: ");
    int num;
    scanf("%d", &num);
    if(num > 0)
{
    for (int i = 0; i >=0 ; i++)
    {
        char str[] = "ifmmp";
        for (int i = 0; str[i] != '\0'; i++)
        {
            str[i] = str[i] - 1; // Decrement each character by 1
        }
        printf("So i wanted to tell you: %s\n", str); // Print the modified string
    }
}
    
    return 0;
}