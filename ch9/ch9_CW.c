//Program to store and display details of cricket players using structure

#include <stdio.h>
#include <string.h>

int main(){
    typedef struct 
    {
        char name[20];
        int age;
        int match_played;
        float avg_run;
    }cricketer;

    cricketer player[5];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter name: ");
        scanf("%s", player[i].name);
        printf("Enter age: ");
        scanf("%d", &player[i].age);
        printf("Enter match played: ");
        scanf("%d", &player[i].match_played);
        printf("Enter average run: ");
        scanf("%f", &player[i].avg_run);
    }

    printf("----Cricket Player Details----\n");
    
    for (int i = 0; i < 4; i++)
    {
        printf("---PLAYER %d--- \n", i + 1);
        printf("%s\n", player[i].name);
        printf(" %d\n", player[i].age);
        printf(" %d\n", player[i].match_played);
        printf(" %.2f\n", player[i].avg_run);
    }

    return 0;
}