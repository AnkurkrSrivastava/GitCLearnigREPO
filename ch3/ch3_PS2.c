#include <stdio.h>

int main() {
    printf("Enter your salary (in lakhs):\n");
    float Salary;
    float tax;
    scanf("%f", &Salary);

    if (Salary > 0 && Salary <= 2.5) {
        printf("Your tax is 0%%\n");
    } else if (Salary > 250000 && Salary <= 500000) {
        tax = 0.05 * (Salary - 250000);
        printf("Your tax is 5%%\n");
        printf("you have to pay %.2f\n", tax);
    } else if (Salary > 500000 && Salary <= 1000000) {
        printf("Your tax is 20%%\n");
        tax = 0.05 * (500000-250000) + 0.20 * (Salary - 500000);
        printf("you have to pay %.2f\n", tax);
    } else if (Salary > 1000000) {
        tax =0.05 * (500000-250000) + 0.20 * (1000000-500000) + 0.30 * (Salary - 1000000);
        printf("Your tax is 30%%\n");
        printf("you have to pay %.2f\n", tax);
    } else {
        printf("Invalid salary entered.\n");
    }

    return 0;
}
