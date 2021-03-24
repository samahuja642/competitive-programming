#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100], temp = n;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = temp % 2;
        temp = temp / 2;
    }
    int a[100];
    for (int i = 99; i >= 0; i--)
        a[99-i] = arr[i];
        int max=0;
    for(int i=0;i<100;i++)
    {
        if(a[i]&arr[i])
        {
            if(a[i]==a[i+1])
            max++;
        }

    }
    
    printf("%d",max);
    return 0;
}
