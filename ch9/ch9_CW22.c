// Program to check if two dates are same or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    typedef struct 
    {
        int date;
        int month;
        int year;
    }date;
    date a,b;
    printf("Enter date 1 (dd mm yyyy): ");
    scanf("%d %d %d", &a.date, &a.month, &a.year);
    printf("Enter date 2 (dd mm yyyy): ");
    scanf("%d %d %d", &b.date, &b.month, &b.year);

   /**  if (a.date == b.date && a.month == b.month && a.year == b.year)
    {
        printf("Both dates are same\n");
    }
    else
    {
        printf("Both dates are different\n");
    } **/

    // Using boolean variable
    bool flag = true;
    if(a.date != b.date) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if(flag == true)
        printf("Both dates are same\n");
    else
        printf("Both dates are different\n");

    return 0;
}