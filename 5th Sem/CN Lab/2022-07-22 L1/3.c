#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    printf("Enter sentence:\n");
    gets(str);
    int len = strlen(str);
    int totalLength = 0, currentLength = 0, wordCount = 0;
    float avg = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            wordCount++;
            totalLength += currentLength;
            currentLength = 0;
        }
        else
        {
            currentLength++;
        }
    }
    wordCount++;
    totalLength += currentLength;
    avg = totalLength / (float)wordCount;
    printf("Avg letters in each words: %f\n", avg);
    return 0;
}