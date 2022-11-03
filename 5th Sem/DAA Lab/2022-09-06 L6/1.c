#include <stdio.h>
#include <stdlib.h>

int mmm = 0;

void merge(int arr[], int l, int m, int r)
{
    int a2[r - l + 1];
    int p = l, q = m + 1;
    int i = 0, j = 0;
    while (p <= m && q <= r)
    {
        if (arr[p] < arr[q])
        {
            a2[i++] = arr[p++];
        }
        else
        {
            a2[i++] = arr[q++];
        }
    }
    while (p <= m)
    {
        a2[i++] = arr[p++];
    }
    while (q <= r)
    {
        a2[i++] = arr[q++];
    }
    for (i = l, j = 0; i <= r; i++)
    {
        arr[i] = a2[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
        printf("\n%d\n", mmm++);
        for (int i = l; i <= r; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
// 4 7 2 8 1
int main()
{
    int n;
    // printf("Enter array size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    // printf("Enter array values\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    mergeSort(arr, 0, n - 1);
    // printf("Array after sorting:\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);
    return 0;
}