#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Congratulations! You guessed correctly.");
    else
        printf("Wrong guess. The number was %d", secret);

    return 0;
}