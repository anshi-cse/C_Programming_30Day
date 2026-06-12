#include<stdio.h>
int main(){
    int num, largestPrime = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i = 2; i <= num; i++) {
        while(num % i == 0){
            largestPrime = i;
            num /= i;
        }
    }
    printf("Largest prime factor is: %d", largestPrime);
    return 0;
}