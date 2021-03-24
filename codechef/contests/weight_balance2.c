#include <stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    for (int y = 0; y < t; y++)
    {
        int w1=0, w2=0, x1=0, x2=0, m=0;
        scanf("%d", w1);
        scanf("%d", w2);
        scanf("%d", x1);
        scanf("%d", x2);
        scanf("%d", m);
        int a = x2 * m;
        int b = x1 * m;
        int c = w2 - w1;
        if (b <= c <= a)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}