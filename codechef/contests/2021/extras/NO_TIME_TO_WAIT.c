#include<stdio.h>
int main()
{
    int n=0,h=0,x=0;
    scanf("%d",&n);
    scanf("%d",&h);
    scanf("%d",&x);
    int a[n],j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(x+a[i]>=h)
        {
            printf("YES");
            j=1;
            break;
        }
    }
    if(j==0)
    {
        printf("NO");
    }
    return 0;
}