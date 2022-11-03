// 1. Let A be a list of n (not necessarily distinct) integers. Write a program by using User
// Defined Function(UDF)s to test whether any item occurs more than  n/2 times in A.
// a) UDF should take O(n2) time and use no additional space.
// b) UDF should take O(n) time and use O(1) additional space.
#include <stdio.h>
#include <stdlib.h>
void countCheck(int *a, int n)
{
    for (int i = 0; i < n; i++) // 1 2 2 2 4
    {
        int count = 1;
        int j = i + 1;
        while (a[j] == a[i])
        {
            j++;
            count++;
        }
        if (count > (n / 2))
        {
            printf("\n%d occurred for %d times", a[i], count);
        }
    }
}
void hashCountCheck(int a[], int n)
{
    int high = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > high)
            high = a[i];
    }
    int *A = (int *)malloc((high + 1) * sizeof(int));
    for (int i = 0; i <= high; i++)
        A[i] = 0;
    for (int i = 0; i < n; i++)
        A[a[i]]++;
    for (int i = 1; i <= high; i++)
        if (A[i] > n / 2)
        {
            printf("\n%d occurred for %d times", i, A[i]);
        }
}
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(n));
    printf("\nEnter array elements: "); // 5      1 2 2 2 3
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    countCheck(arr, n);
    hashCountCheck(arr, n);
    return 0;
}