#include <stdio.h>

int main()
{
    int secret = 25, guess;

    printf("=== Number Guessing Game ===\n");

    do
    {
        printf("Guess the number (1-50): ");
        scanf("%d", &guess);

        if(guess < secret)
            printf("Too Low!\n");
        else if(guess > secret)
            printf("Too High!\n");
        else
            printf("Congratulations! You guessed it correctly.\n");

    } while(guess != secret);

    return 0;
}