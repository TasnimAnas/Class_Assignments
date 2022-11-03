#include <stdio.h>
#include <stdlib.h>
int binSearch(int arr[], int lb, int ub, int x)
{
    static steps = 0;
    if (ub >= lb)
    {
        steps += 2;
        int mid = lb + (ub - lb) / 2;
        if (arr[mid] == x)
            return steps;
        if (arr[mid] > x)
            return binSearch(arr, lb, mid - 1, x);
        return binSearch(arr, mid + 1, ub, x);
    }
    return -1;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    int *arr;
    printf("Enter the sizeof array: ");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 5001;
    printf("Array created:\n");
    insertionSort(arr, n);
    printf("\n");
    int r, s, m, e;
    r = arr[rand() % n];
    s = arr[0];
    m = arr[n / 2];
    e = arr[n - 1];
    printf("Searching %d (Random) from array takes %d steps\n", r, binSearch(arr, 0, n - 1, r));
    printf("Searching %d (Start) from array takes %d steps\n", s, binSearch(arr, 0, n - 1, s));
    printf("Searching %d (Mid) from array takes %d steps\n", m, binSearch(arr, 0, n - 1, m));
    printf("Searching %d (End) from array takes %d steps\n", e, binSearch(arr, 0, n - 1, e));

    return 0;
}