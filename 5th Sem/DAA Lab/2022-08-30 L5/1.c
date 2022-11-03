#include <stdio.h>
#include <math.h>

float squareRoot(int n)
{
    if (n == 1)
        return n;
    double sqrt = n / 2;
    double temp = 0.0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = ((n / temp) + temp) / 2;
    }

    return sqrt;
}
int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);
    printf("Square Root of (%.4f) is (%.4f).", n, squareRoot(n));
    return (0);
}