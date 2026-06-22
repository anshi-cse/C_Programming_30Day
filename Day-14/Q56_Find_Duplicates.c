#include<stdio.h>
int main()
{
    int arr[100], n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");
    for(i = 0; i < n; i++)
    {
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        if(count > 1 && arr[i] != -1)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}