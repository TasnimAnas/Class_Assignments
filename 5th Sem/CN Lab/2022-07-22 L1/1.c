#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    char c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    fflush(stdin);
    scanf("%c", &c);
    float result = 0;
    switch (c)
    {
    case '+':
    {
        result = a + b;
        break;
    }
    case '-':
    {
        result = a - b;
        break;
    }
    case '*':
    {
        result = a * b;
        break;
    }
    case '/':
    {
        result = a / (double)b;
        break;
    }
    default:
    {
        printf("Unknown operation...\n");
        return 1;
    }
    }
    printf("%d %c %d = %f", a, c, b, result);
    return 0;
}