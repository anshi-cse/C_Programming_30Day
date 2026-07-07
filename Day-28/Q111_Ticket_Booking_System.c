#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int price = 250;

    printf("Enter Customer Name: ");
    scanf("%s", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("\n----- Ticket Details -----\n");
    printf("Customer : %s\n", t.name);
    printf("Seats    : %d\n", t.seats);
    printf("Total Fare : %d\n", t.seats * price);

    return 0;
}