#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Project: Number Guessing Game
// Made by: Sonakshi
// Description: Guess the number between 1 to 100

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("\nwelcome to sonakshi guessing game \n");

    while (1) {
        printf("Enter your guess (1-100)");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Too High!\n");
        }
        else if (guess < number) {
             printf("Too Low!\n");
        }
        else {
            printf("Correct! you guessed in %d attempts\n", attempts);
            break;
        }
    }
    return 0;
}
