//program to find sum of numbers not divisible by m and divisible by m
// and return the difference of both sums

#include <stdio.h>

int main()
{
    int num1 = 0; // ✅ Initialize sum for non-divisible numbers
    int num2 = 0;
    int n = 0, m = 0;
    printf("Enter a number upto which you want array: ");
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    /*for (int i = 0; i < n ; i++)
    {
     printf("%d ",num[i]);
    }*/

    printf("Enter the divisor: ");
    scanf("%d", &m);

    /*for (int i = 0; i < n; i++)
    {
        if (num[i] % m != 0)
        {
            printf("%d ", num[i]);
        }
    }*/

    printf("\n");
// Print numbers not divisible by m
    for (int i = 0; i < n; i++)
    {
        if (num[i] % m != 0)
        {
            printf("%d ", num[i]);
            num1 += num[i]; // ✅ Add only if not divisible by m
        }
    }

    printf("\n");
// Print numbers divisible by m
    for (int i = 0; i < n; i++)
    {
        if (num[i] % m == 0)
        {
            printf("%d ", num[i]);
            num2 += num[i]; // ✅ Add only if not divisible by m
        }
    }

    printf("\n");

    printf("sum of non divisible array is %d\n", num1);
    printf("sum of divisible array is %d\n", num2);

    printf("return as per question is %d\n", num1 - num2);


    return 0;
}