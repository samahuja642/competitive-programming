#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int greatest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
    }
    int repeat=0;
    for(int i=0;i<n;i++)
    {
        if(greatest==arr[i])
        {
            repeat++;
        }
    }
    printf("%d",repeat);
    return 0;
}