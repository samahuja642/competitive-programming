#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int temp[5];
    temp[0]=0;
    int next=n;
    for(int i=1;i<=4;i++)
    {
        temp[i]=next%2;
        next=next/2;
    }
    printf("%d\n",temp[4]);
    return 0;
}