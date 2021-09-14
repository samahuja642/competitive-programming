#include <stdio.h>
#include <math.h>
int main()
{
    int number_of_testcases;
    scanf("%d", &number_of_testcases);
    int test = 1;
    int n;
label:
    
    scanf("%d", &n);
    int a[n], temp = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    int x = a[0], y = a[1], z = a[n - 1];
    int greatest = abs(x - y) + abs(y - z) + abs(z - x);
    printf("%d\n", greatest);
    if (test < number_of_testcases)
    {
        test++;
        goto label;
    }
    return 0;
}