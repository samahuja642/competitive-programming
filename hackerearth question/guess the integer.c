#include <stdio.h>
int main()
{ //no of testcases
    int t = 0, r = 1;
    int h = 0;
    scanf("%d", &t);
lab:
    //no of hints

    scanf("%d", &h);

    int a[h];
    char b[h];

    for (int i = 0; i < h; i++)
    {
        scanf("%c", &b[h]);
        scanf("%d", &a[h]);
    }
    if (b[1] == 'R' & b[0] == 'L')
        printf("%d", a[0] - a[1]);
    if (r < t)
    {
        r++;
        goto lab;
    }
    return 0;
}