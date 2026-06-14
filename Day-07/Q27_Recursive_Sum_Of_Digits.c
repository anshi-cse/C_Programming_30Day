#include <stdio.h>

int sumDigits(int n)
{
    if (n < 10)
        return n;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    printf("Sum = %d", sumDigits(n));

    return 0;
}