#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, original, reversed = 0;
    bool isPalindrome;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    isPalindrome = (reversed == original);  // true or false

    if (isPalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
