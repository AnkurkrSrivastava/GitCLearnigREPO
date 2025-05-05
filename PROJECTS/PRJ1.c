#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random = rand() % 101; // rand() % 101 gives numbers from 0 to 100
    int guess;
    int attempts = 0;
    printf("Welcome to the Guessing Game!\n");

    while (1)
    {
        printf("Guess a number between 0 and 100:\n");
        scanf("%d", &guess);
        if (guess < 0 || guess > 100)
        {
            printf("Invalid input! Please enter a number between 0 and 100:\n");
            continue; // Skip the rest of the loop and ask for input again
        }
        attempts++;
        if (guess < random)
        {
            printf("Low number! Try little higher again:\n");
        }
        else if (guess > random)
        {
            printf("High number! Try little lower again:\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts\n", random, attempts);
            break;
        }

    }

    return 0;
}
