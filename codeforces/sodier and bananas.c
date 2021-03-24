#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k=0,n=0,w=0;
    scanf("%d",&k);
    scanf("%d",&n);
    scanf("%d",&w);
    int a=0;
    for(int i=1;i<=w;i++)
    {
        a+=k*i;
    }
    if(a-n>=0)
    printf("%d",a-n);
    else
    printf("0");
    return 0;
}