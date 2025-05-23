//program to enter certain amount of array and increase the last element by one and print the entire array

#include <stdio.h>

int main(){
    printf("how many array you want to store:");
    int n =  0;
    scanf("%d" , &n);

    if(n <= 0){
        printf("Invalid number entered.\n");
        return 1;
    }
    
    int digits[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Elements %d: ", i+1);
        scanf("%d", &digits[i]);
    }
    
       // Add 1 to the last element
    digits[n - 1] += 1;

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    


    return 0;
}