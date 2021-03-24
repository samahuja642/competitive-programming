#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int a, b;
    for(int i=1;i<=t;i++)
    {
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a + b);
        
    }
    return 0;
}