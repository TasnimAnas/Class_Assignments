#include <stdio.h>
int maxValue(int a[], int l)
{
    int finalMax = 0, currentMax = 0;

    for (int i = 0; i < l; i++)
    {
        currentMax = currentMax + a[i];
        if (finalMax < currentMax)
        {
            finalMax = currentMax;
        }

        if (currentMax < 0)
        {
            currentMax = 0;
        }
    }
    return finalMax;
}
int main()
{
    int l, i;
    printf("Enter the length of the list:\n");
    scanf("%d", &l);
    int a[l];
    printf("Enter the numbers in the list:\n");
    for (i = 0; i < l; i++)
        scanf("%d", &a[i]);
    printf("Maximum value that you can get out of the entered list of numbers is: %d.", maxValue(a, l));
    return 0;
}