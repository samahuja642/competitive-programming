#include<stdio.h>
int main()
{
    int x=0;
    scanf("%d",&x);
    char a;
    scanf("%s",&a);
    if(a=x++|a=++x)
    return 0;
}