#include <stdio.h>

int armstrong(int n)
{
    int original = n, sum = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    return original == sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is Not an Armstrong number.\n", num);

    return 0;
}