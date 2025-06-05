// Program to sort an array using bubble sort algorithm

#include <stdio.h>

int main(){
    int arr[10] = {9, 1, 3, 4, 10, 5, 6};
    int n = 7;
    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble sort algorithm
    // nested loops to compare adjacent elements and swap them if they are in the wrong order

    for (int i = 0; i < n-1; i++) // n-1 because the last element will already be in place after n-1 passes
    {
        for (int j = 0; j < n-1-i; j++) // n-1-i because the last i elements are already sorted
        {
            if (arr[j] > arr[j+1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}