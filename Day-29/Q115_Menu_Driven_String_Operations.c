#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== String Operations =====\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Uppercase\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", (int)strlen(str));
                break;

            case 2:
            {
                int len = strlen(str);
                for(int i = len - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            }

            case 3:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }
                printf("Uppercase = %s\n", str);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}