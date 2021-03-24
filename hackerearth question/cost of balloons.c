#include<stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    for(int b=0;b<t;b++)
    {
        int q1,w1,u;
        scanf("%d",&q1);
        scanf("%d",&w1);
        if(q1>w1)
        {
            u=q1;
            q1=w1;
            w1=u;
        }
    int n=0;
    int q=0,w=0,price=0;
    scanf("%d",&n);
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1&j==1)
            {
                q++;
            }
            if(a[i][j]==1&j==0)
            {
                w++;
            }
        }
    }
    if(q>w)
    price=q1*q+w1*w;
    else
    {
        price=w1*q+q1*w;
    }
    printf("%d\n",price);
    }
    return 0;
}