#include <stdio.h>
int main() {
    int n, digit, rev=0; 
    printf("Enter Number:");
    scanf("%d", &n);
    while(n != 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    printf("Reversed Number = %d", rev);
    return 0;
}