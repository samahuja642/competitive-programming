#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &a[i]);
        }
        int k;
        scanf("%d", &k);
        int temp = a[9] - k;

        for (int i = 9; i >= 0; i--)
        {

            if (temp > 0)
            {
                if (a[i - 1] == 0)
                {

                    for (int l = 1; l <= i; i++)
                    {
                        if (a[i - l] != 0)
                        {
                            printf("%d\n", i - l + 1);
                            break;
                        }
                    }
                }
                else
                {

                    printf("%d\n", i);
                    break;
                }
            }
            else
            {
                temp = a[i] + temp;
            }
        }
    }
    return 0;
}