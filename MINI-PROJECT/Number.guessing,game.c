//MINAKSHI BEHRA
//10821
#include <stdio.h>

int main() {
    int secret = 42;
    int guess;                                                                                                int attempts = 5;   
    int i;

    printf("Guess the secret number (between 1 and 100).\n");
    printf("You have %d attempts.\n\n", attempts);

    for (i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("🎉 Correct! You guessed the secret number.\n");
            break;  
        } else if (guess < secret) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }

    if (guess != secret) {
        printf("Sorry, you've used all %d attempts. The secret number was %d.\n", attempts, secret);
    }

    return 0;
}