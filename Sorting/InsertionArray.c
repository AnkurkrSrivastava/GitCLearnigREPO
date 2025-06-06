//Program to insert an element at a specific position in an array

#include <stdio.h>

int main(){
    int n;
    int pos,ele;
    printf("Emter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &ele);

    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);

    for (int i = n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i]; // Shift elements to the right
    }

    arr[pos] = ele; // Insert the new element at the specified position
    n++; // Increase the size of the array
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}