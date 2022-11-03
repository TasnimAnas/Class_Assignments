#include <stdio.h>
#include <stdlib.h>

typedef struct Task
{
    int startTime, finishTime;
} Task;

void merge(Task arr[], int l, int m, int r)
{
    Task a2[r - l + 1];
    int p = l, q = m + 1;
    int i = 0, j = 0;
    while (p <= m && q <= r)
    {
        if (arr[p].finishTime <= arr[q].finishTime)
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

void mergeSort(Task arr[], int lb, int ub)
{
    if (ub > lb)
    {
        int mid = (ub + lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int activitySelection(Task arr[], int n)
{
    mergeSort(arr, 0, n - 1);
    int currentMax = -1;
    int possibleActivity = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].startTime > currentMax)
        {
            currentMax = arr[i].startTime;
            possibleActivity++;
        }
        else
        {
            arr[i].startTime = -1;
        }
    }
    return possibleActivity;
}

int main()
{
    int n;
    printf("Enter number of tasks: ");
    scanf("%d", &n);
    Task *arr = (Task *)malloc(sizeof(Task) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter start and finish time of task %d: ", i + 1);
        scanf("%d%d", &arr[i].startTime, &arr[i].finishTime);
    }
    int possibleActivity = activitySelection(arr, n);
    printf("Number of possible activities: %d\n", possibleActivity);
    printf("Possible activities: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i].startTime != -1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}