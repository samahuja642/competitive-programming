#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n - 1], trash = 0;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        trash = 0;
        for (int j = 0; j < n - 1; j++)
        {

            if (a[j] == i + 1)
            {
                break;
            }
            else
            {
                trash++;
            }
            if (trash == n - 1)
            {
                printf("%d", i + 1);
            
            }
        }
    }
    return 0;
}