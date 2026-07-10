#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[2];
    int i;

    for(i = 0; i < 2; i++)
    {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n===== Library Records =====\n");

    for(i = 0; i < 2; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("ID     : %d\n", b[i].id);
        printf("Title  : %s\n", b[i].title);
        printf("Author : %s\n", b[i].author);
    }

    return 0;
}