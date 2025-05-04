#include <stdio.h>

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main(){
    int arr[] = {34, 74, 72, 23, 45, 67, 89, 12, 56, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    



    return 0;
}