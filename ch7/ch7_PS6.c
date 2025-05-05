#include <stdio.h>

int main(){
    int arr[6][7][8];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           for (int k = 0; i < 4; k++)
           {
            printf("%u ", &arr[i][j][k]);
            break;
           }
           
        }
    }
    

    return 0;
}