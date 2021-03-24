#include <stdio.h>
int main()
{
    float w = 0;
    scanf("%f", &w);
    if (w == 2 | (int)w % 2 != 0)
        printf("NO");
    else
    {
        printf("YES");
    }

    return 0;
}