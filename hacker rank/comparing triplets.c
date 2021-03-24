#include<stdio.h>
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    int pointsa=0,pointsb=0;
    for(int i=0;i<3;i++)
    {
    if(a[i]>b[i])
    {
        pointsa+=1;
    }
    else if(a[i]<b[i])
    {
        pointsb+=1;
    }

    }
    printf("%d %d\n",pointsa,pointsb);
    return 0;
}