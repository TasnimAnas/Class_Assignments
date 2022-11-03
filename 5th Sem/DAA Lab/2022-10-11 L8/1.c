#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int value, weight;
} Item;

int cmp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

void merge(Item arr[], int l, int m, int r)
{
    Item a2[r - l + 1];
    int p = l, q = m + 1;
    int i = 0, j = 0;
    while (p <= m && q <= r)
    {
        if (cmp(arr[p], arr[q]))
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

void mergeSort(Item arr[], int lb, int ub)
{
    if (ub > lb)
    {
        int mid = (ub + lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

double zeroOneKnapsack(int W, Item arr[], int N)
{
    mergeSort(arr, 0, N - 1);
    double finalValue = 0.0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            finalValue += arr[i].value * ((double)W / (double)arr[i].weight);
            break;
        }
    }
    return finalValue;
}
int main()
{
    int w, n;
    printf("Enter weight of Knapsack: ");
    scanf("%d", &w);
    printf("Enter number if items: ");
    scanf("%d", &n);
    Item *arr = (Item *)malloc(sizeof(Item) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value and weight of item %d: ", i + 1);
        scanf("%d%d", &arr[i].value, &arr[i].weight);
    }
    printf("Maximum value we can obtain = %lf", zeroOneKnapsack(w, arr, n));
    return 0;
}
