#include <stdio.h>
#include <string.h>

void findLCS(char s1[], char s2[])
{
    int i, j, m, n, lcsTable[20][20], b[20][20];
    m = strlen(s1);
    n = strlen(s2);
    for (i = 0; i <= m; i++)
        lcsTable[i][0] = 0;
    for (i = 0; i <= n; i++)
        lcsTable[0][i] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                lcsTable[i][j] = lcsTable[i - 1][j - 1] + 1;
            }
            else if (lcsTable[i - 1][j] >= lcsTable[i][j - 1])
            {
                lcsTable[i][j] = lcsTable[i - 1][j];
            }
            else
            {
                lcsTable[i][j] = lcsTable[i][j - 1];
            }
        }

    int index = lcsTable[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            lcsAlgo[index - 1] = s1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (lcsTable[i - 1][j] > lcsTable[i][j - 1])
            i--;
        else
            j--;
    }
    printf("LCS: %s", lcsAlgo);
}

int main()
{
    char s1[20], s2[20];
    printf("Enter 1st string:\n");
    gets(s1);
    printf("Enter 2nd string:\n");
    gets(s2);
    findLCS(s1, s2);
    printf("\n");
}