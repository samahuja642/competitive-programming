#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int greatest(int *ptr, int n)
{
    int largest = 0, sum = 0;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        x = *ptr + i;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                y = *ptr + j;
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                    {
                        continue;
                    }
                    else
                    {
                        z = *ptr + k;
                        sum = abs(x - y) + abs(y - z) + abs(z - x);
                        if (largest < sum)
                        {
                            largest = sum;
                        }
                    }
                }
            }
        }
    }
    return largest;
}
int main()
{
    // int number_of_testcases;
    // scanf("%d", &number_of_testcases);
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    int x = greatest(ptr, n);
    printf("%d", x);

    return 0;
}