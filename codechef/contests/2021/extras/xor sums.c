#include<stdio.h>
int xor(int r,int *ptr,int n)
{
    int sum=0;
    if(r==1)
    {
        for(int i=0;i<n;i++)
        {
            sum+=*(ptr+i);
        }
    }
    else
    {
        
        sum=1;
        // for(int i=0;i<r;i++)
        // sum^=*(ptr+i);
        for(int i=0;i<r;i++)
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    int m[q];
    for(int i=0;i<q;i++)
    {
        scanf("%d",&m[i]);
    }
    xor(m[q],&a[0],n);
    
    return 0;
}