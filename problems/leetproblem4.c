//program to print no of total words in array

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int wordsSize = 0;
    printf("How many words you want to store :");
    scanf("%d", &n);

    char words[n][10];

    printf("Enter words to store:");
    for (int i = 0; i < n; i++)
    {
     scanf("%s", words[i]);   
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ",words[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        wordsSize += strlen(words[i]);
    }
    printf("%d", wordsSize);

    return 0;
}