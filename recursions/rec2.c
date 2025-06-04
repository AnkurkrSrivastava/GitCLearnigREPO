//Maze problem in which no of ways is given as output.


#include <stdio.h>

int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int DownWays = 0;
    if (cr == er && cc == ec) return 1;
    
    if(cr == er){
        rightWays += maze(cr, cc+1, er, ec);
    }

    if(cc == ec){
        DownWays += maze(cr+1, cc, er, ec);
    }
    if (cr<er && cc<ec)
    {
        rightWays += maze(cr, cc+1, er, ec);
        DownWays += maze(cr+1, cc, er, ec);
    }
    
    int totalWays = rightWays + DownWays;
    return totalWays;

}

int main(){
    int n;
    int m;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    printf("Enter no. of columns:");
    scanf("%d", &m);
    int noOfWays = maze(1,1,n,m);
    printf("No. of ways are :%d", noOfWays);

    return 0;
}