#include<stdio.h>
int main(){
    int start, end, i, j;
    printf("Enter start and end:");
    scanf("%d %d", &start, &end);
    printf("Prime numbers are:");
    for(i = start; i <= end; i++){
        if(i <= 1)
        continue;
    for(j = 2; j < i; j++){
        if(i % j == 0)
        break;}
    if(j == i)
    printf("%d ", i);
    }
 return 0;
}