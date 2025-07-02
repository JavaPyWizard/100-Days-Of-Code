// Check if array is sorted (asc/desc)
// Problem implementation in C

#include <stdio.h>

int main()
{
    int arr[100], n;
    int isAsc = 1, isDesc = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            isDesc = 0;
        else if (arr[i] > arr[i + 1])
            isAsc = 0;
    }

    if (isAsc)
        printf("The array is sorted in ascending order.\n");
    else if (isDesc)
        printf("The array is sorted in descending order.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}
