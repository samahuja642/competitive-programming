#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int n = 0, count = 0;
        char c;
        c = (char)malloc(sizeof(char)*100000);
        scanf("%s", c);
        n = strlen(c);
        for (int i = 0; i < n; i++)
        {
            if ((c + i) == '1')
            {
                for (int j = i; j < n; j++)
                {
                    if ((*(c + j) == '0') || (j == (n - 1)))
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        printf("%ld\n", count);
        free(c);
    }
    return 0;
}