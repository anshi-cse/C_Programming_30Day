#include <stdio.h>

int palindrome(int n)
{
    int original = n, reverse = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }

    return original == reverse;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is Not a Palindrome.\n", num);

    return 0;
}