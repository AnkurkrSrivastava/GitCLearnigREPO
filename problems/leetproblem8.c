//arr
//n = size of arr
//m = [1,m] ---> let m=2, [1,2] type array should be formed 
//k = matching adjacent elements

/*
n = 3,m = 2, k =1
output  = 4
good arrays are:[1 1 2] [1 2 2] [2 1 1] [2 2 1]
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, k;
    printf("Enter the size of array--n, range--m and adjacent matching--k: ");
    scanf("%d %d %d", &n, &m, &k);
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {

        arr[0] = 1;
        arr[i+1] = m;
        //printf("%d ", arr[i]);
    }

    //Condition FOR zero matching adjacent elements
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            arr[i] = (i%m) + 1; // This line will return back the value in the range of [1,m]

            if (i>0 && arr[i] == arr[i-1]) //executed when i>0 and arr[i] == arr[i-1]
            {
                arr[i] = (arr[i] % m) + 1; //This line will return back the value in the range of [1,m] if arr[i] is equal to arr[i-1]
                //Ex:Let's say m=2, then arr[i] will be 1 or 2, if it is 1 then it will return 2 and if it is 2 then it will return 1
            }
        }else{
            arr[i] = 1;
        }  
    }

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n-1-i];
    }

        //original
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
        
    printf("\n");
    //reversed
    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    //Condition FOR non-zero matching adjacent elements
    if (k > 0)
    {
        for (int i = 0; i < n; i++)
        {
            
        }
        
    }
    
    

    return 0;
}