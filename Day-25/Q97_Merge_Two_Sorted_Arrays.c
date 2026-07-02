#include <stdio.h>

int main()
{
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr2[n2], merged[n1 + n2];

    printf("Enter elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    i = j = k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while(i < n1)
        merged[k++] = arr1[i++];

    while(j < n2)
        merged[k++] = arr2[j++];

    printf("Merged Sorted Array:\n");

    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    return 0;
}