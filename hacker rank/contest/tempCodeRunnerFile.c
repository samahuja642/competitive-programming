#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int t = 0;
    int *ptr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= t)
            {

                if (nums[i] == *(ptr + j))
                {
                    break;
                }
            }
            if (nums[i] == nums[j])
            {
                t++;
                ptr = (int *)realloc(ptr, t * sizeof(int));
                ptr = &nums[i];
            }
        }
    }
    free(ptr);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", t);
    }
    return 0;
}