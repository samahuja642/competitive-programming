#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m, h;
    float index;
    for (int j = 0; j < t; j++)
    {
        scanf("%d", &m);
        scanf("%d", &h);
        index = ((float)m / (float)h) / (float)h;
        if (index <= 18)
        {
            printf("1\n");
        }
        else if (index >= 19 && index <= 24)
        {
            printf("2\n");
        }
        else if (index >= 25 && index <= 29)
        {
            printf("3\n");
        }
        else
            printf("4");
    }
    return 0;
}