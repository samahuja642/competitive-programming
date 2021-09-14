#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long int n, k;
    for (int j = 0; j < t; j++)
    {

        scanf("%ld", &n);
        scanf("%ld", &k);
        long int result = n;
        while (result - k > 0)
        {
            result -= k;
        }
        printf("%ld\n", result);
    }
    return 0;
}