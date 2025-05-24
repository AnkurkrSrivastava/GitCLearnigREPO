//program to print the position of array as per target sum is given

#include <stdio.h>

// int* twoSum(int* nums, int numsize, int target, int* returnsize){
//     int num[] = {};

//}

int main()
{
    int n = 0;
    printf("How much elements you want to store: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter numbers you want to store as array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    //for (int i = 0; i < n; i++)
    //{
    //    printf("%d ", num[i]);
    //}
    int target = 0;
    printf("Enter what sum of two numbers you want: ");
    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j =i + 1; j < n; j++)
        {
            if (num[i]+num[j] == target)
            {
                printf("position of array is [%d,%d]\n",i,j);
                printf("Pair found: %d + %d = %d\n", num[i],num[j],target);
                found = 1;
                break;
            }
            if (found)break;            
        }
        if (!found)
        {
            printf("No pair found that adds upto %d\n", target);
        }  
    }

    return 0;
}