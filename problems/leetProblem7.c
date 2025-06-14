#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    // Convert int to string to process each digit
    char numStr[100];
    sprintf(numStr, "%d", num); // Convert integer to string

    char target = numStr[0]; // Store the first digit

    for (int i = 0; i < strlen(numStr); i++)
    {
       if (numStr[i] == target || numStr[i] == '0') {
        
        numStr[i] = '9';

       }else {
            numStr[i] = '0';
        }
    }

    printf("Modified number: %s\n", numStr);
    
    return 0;
}