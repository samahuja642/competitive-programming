#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
    long int n,k;
    scanf("%ld",&n);
    scanf("%ld",&k);
    if(n<k||k==0)
    {
        printf("%ld\n",n);
    }
    else{
        printf("%ld\n",n%k);
    }
    

    }
    return 0;
}