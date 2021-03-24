#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum+=a[i];
    }
   printf("%ld",sum);
    return 0;
}
