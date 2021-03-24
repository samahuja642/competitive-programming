#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    float zero=0,positive=0,negative=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        {
            zero++;
        }
        if(a[i]>0)
        {
            positive++;
        }
        if(a[i]<0)
        {
            negative++;
        }
    }
    printf("%f\n%f\n%f",positive/n,negative/n,zero/n);
    
    return 0;
}