#include <stdio.h>
#include <stdlib.h>

char board[3][3];

int main(){

     printf("  0 1 2\n");
    for(int i=0;i<3;i++){
        printf("%d ",i);
        for(int j=0;j<3;j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    return 0;
}