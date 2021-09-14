#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
{
    int q,p,total,after;
    scanf("%d",&q);
    scanf("%d",&p);
    total=p*q;
    if(q>1000)
    {
        after=total-(0.1)*(total);
        
    }
    else
    {
        after=total;
    }
    printf("%d",after);
}
    return 0;
}