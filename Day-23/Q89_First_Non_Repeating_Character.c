#include <stdio.h>

int main()
{
    char str[100];
    int i, j, unique;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        unique = 1;

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                unique = 0;
                break;
            }
        }

        if(unique)
        {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}