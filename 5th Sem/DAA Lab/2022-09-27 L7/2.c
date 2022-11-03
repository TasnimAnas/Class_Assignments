#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        a[i] = rand() % 100;
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void minHeapify(int a[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int smallest;
    if (left < n && a[left] < a[i])
    {
        smallest = left;
    }
    else
    {
        smallest = i;
    }
    if (right < n && a[right] < a[smallest])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(&a[i], &a[smallest]);
        minHeapify(a, n, smallest);
    }
}

void build_min_heap(int a[], int n)
{
    int i;
    for (i = (n / 2) - 1; i >= 0; i--)
    {
        minHeapify(a, n, i);
    }
}

void heap_sort(int a[], int n)
{
    int i;
    build_min_heap(a, n);
    for (i = n - 1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        minHeapify(a, i, 0);
    }
}
int main()
{
    int n, i, ch;
    clock_t start, end;
    double cpu_time_used;
    while (1)
    {
        printf("\nEnter 0 to exit.");
        printf("\nEnter 1 to create and sort the array using min heap.");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 0)
        {
            printf("\nProgram exited.");
            break;
        }
        else
        {

            printf("value of n\t\tcpu time taken\n");
            srand(time(0));
            for (i = 0; i < 10; i++)
            {
                n = 5000 + rand() % 100;
                int *array = (int *)malloc(n * sizeof(int));
                create(array, n);
                start = clock();
                heap_sort(array, n);
                end = clock();
                cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
                printf("%d\t\t\t\t%f\n", n, cpu_time_used);
            }
        }
    }
    return 0;
}