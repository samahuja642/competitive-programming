#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    char *s;
    for(int i=0;i<n;i++)
    scanf("%c",&*(s+i));
    printf("%s",*s);

    return 0;
}