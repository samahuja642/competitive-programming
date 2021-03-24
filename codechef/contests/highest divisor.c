#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int largest=1;
    if(n%2!=0){
    for(int i=1;i<=10;i+=2)
    {
        if(n%i==0)
        largest=i;
    }

    }
    else{
        for(int i=1;i<=10;i++)
        {
            if(n%i==0)
            largest=i;
        }
    }
    printf("%d",largest);
    return 0;
}