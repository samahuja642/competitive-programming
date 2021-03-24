#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int a[10];
        int k;
        for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
        scanf("%d",&k);
        int temp=k;
        for(int i=9;i>=0;i--)
        {
            
            if(a[i]>temp)
            {
                printf("%d\n",i+1);
                break;
            }
            else if(a[i]<=temp)
            {
                temp=temp-a[i];
            }
        }

    }
    return 0;
}