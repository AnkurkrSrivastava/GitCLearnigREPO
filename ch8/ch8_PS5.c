#include <stdio.h>
#include <string.h>

void str

int main(){
    printf("Enter an integer: ");
    char src[] = "Hi everyone!";
    char tgt[] = "Im here!";
    strcpy(tgt, src); // Copy src to tgt
    printf("tgt = %s\n", tgt); // Print the modified tgt string
    return 0;
}