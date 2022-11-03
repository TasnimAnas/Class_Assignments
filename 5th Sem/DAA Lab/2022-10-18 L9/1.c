#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int value, weight;
} Item;

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int zeroOneKnapSack(int W, Item items[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (items[n - 1].weight > W)
        return zeroOneKnapSack(W, items, n - 1);
    else
        return max(
            items[n - 1].value + zeroOneKnapSack(W - items[n - 1].weight, items, n - 1), zeroOneKnapSack(W, items, n - 1));
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
    printf("Maximum value we can obtain = %d", zeroOneKnapSack(w, arr, n));
    return 0;
}
