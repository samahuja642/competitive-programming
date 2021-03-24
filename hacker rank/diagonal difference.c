#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int diagonal1=0,diagonal2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            diagonal1+=a[i][j];
            if(i+j==n-1)
            diagonal2+=a[i][j];
        }
    }
    printf("%d",abs(diagonal2-diagonal1));

    return 0;
}