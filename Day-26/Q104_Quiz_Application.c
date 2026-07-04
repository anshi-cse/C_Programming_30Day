#include <stdio.h>

int main()
{
    int score = 0, answer;

    printf("===== C Quiz =====\n\n");

    printf("Q1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ2. Which symbol is used for comments in C?\n");
    printf("1. //\n");
    printf("2. ##\n");
    printf("3. <!-- -->\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ3. Which function is the entry point of a C program?\n");
    printf("1. start()\n");
    printf("2. main()\n");
    printf("3. run()\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}