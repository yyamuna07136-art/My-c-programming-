//number guessing game 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int randomNumber;
    int userGuess;
    int attempts = 0;
    srand(time(null));
    randomNumber = (rand() % 100) + 1;
        printf("Welcome to the Number Guessing Game!\n");
        printf ("I have chosen a number between 1 and 100.Try to guess it.\n");
        while (userGuess != randomNumber) {
            printf ("Enter your guess: ");
            scanf("%d",  &userGuess);
            attempts++;
            if (userGuess < randomNumber) {
                printf ("Too low! Try again.\n");
            } else if (userGuess > randomNumber) {
                printf ("Too high! Try again.\n");
            } else {
                printf ("Congratulations! You guessed the number %d attempts.\n", randomNumber,attempts);
            }
        }
    return 0;
}
