#include <stdio.h>
int main()
{
    long int t;
    scanf("%ld", &t);
    for (long int y = 0; y < t; y++)
    {
        long int n;
        scanf("%ld", &n);
        long int total = (n * (n + 1)) / 2;
        long int a[n], sum = 0, count = 0;
        for (long int i = 0; i < n; i++)
        {
            scanf("%ld", &a[i]);
            sum += a[i];
            if (a[i] > n)
            {
                count++;
            }
        }
        if (count != 0)
        {
            printf("Second\n");
            goto label;
        }
        if (total - sum >= 0)
        {

            if ((total - sum) % 2 == 0)
            {
                printf("Second\n");
            }
            else
            {
                printf("First\n");
            }
        }
        else
        {
            printf("Second\n");
        }
    }
label:
    return 0;
}