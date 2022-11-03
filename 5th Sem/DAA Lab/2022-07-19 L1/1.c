#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    // printf("Enter array size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *visit = (int *)calloc(n, sizeof(int));
    // printf("Enter values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int compCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (visit[i] != 0)
            continue;
        visit[i] = 1;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            compCount++;
            if (arr[i] == arr[j])
            {
                count++;
                visit[j] = 1;
            }
        }
        // printf("%d => %d\n", arr[i], count);
    }
    printf("Comparisons: %d", compCount);

    return 0;
}