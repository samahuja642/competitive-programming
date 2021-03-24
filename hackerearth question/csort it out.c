#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    struct array{
        int index;
        int value;

    }array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i].value);
        array[i].index=i;
    }
    for(int i=0;i<n;i++)
    printf("%d ",array[i].index);
    int swapped;
    int temp;
    while(1)
    {
        swapped=0;
        for(int i=0;i<n-1;i++)
        {
            if(array[i].value>array[i+1].value)
            {
                temp=array[i].value;
                array[i].value=array[i+1].value;
                array[i+1].value=temp;
                temp=array[i].index;
                array[i].index=array[i+1].index;
                array[i+1].index=temp;
                swapped=1;
            }
                if(swapped==0)
                {
                    break;
                }
        }

    }
    for(int i=0;i<n;i++)
    printf("%d ",array[i].index);
    return 0;
}