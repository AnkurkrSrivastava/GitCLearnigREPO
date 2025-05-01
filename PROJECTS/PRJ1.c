#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));  

    // Generate a random number between 0 and 100
    int random = rand() % 101;  // rand() % 101 gives numbers from 0 to 100
    int guess;
    int attempts = 0;
    printf("Welcome to the Guessing Game!\n");
    printf("Guess a number between 0 and 100: ");
    scanf("%d", &guess);
    while (guess != random)
    {
        if(guess < random) {
            printf("Too low! Try again:\n");
        } else {
            printf("Too high! Try again:\n");
        }
        
        printf("Guess a number again between 0 and 100:\n ");
        scanf("%d", &guess);
        attempts++;
        
    }
    printf("Congratulations! You guessed the number %d in %d attempts\n", random ,attempts);
    
    return 0;
}
