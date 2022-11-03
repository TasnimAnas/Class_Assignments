#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int arr[], int n)
{
    int compCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            compCount++;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return compCount;
}

int main()
{
    int n;
    // printf("Enter array size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    // printf("Enter values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int compCount = bubbleSort(arr, n);
    // printf("Array after sorting: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("Number of comparison: %d", compCount);
    return 0;
}