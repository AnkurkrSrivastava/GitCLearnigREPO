#include <stdio.h>

int main(){
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int numerals[7] = {1,5,10,50,100,500,1000};
    printf("Enter roamn numreal to know its value: ");
    char Enter;
    scanf("%c", &Enter);
    for (int i = 0; i <= 7; i++)
    {
        if (Enter == roman[i])
        {
            
        }
        
    }



    return 0;
}