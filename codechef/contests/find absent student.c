#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1],stud[n],present[n-1],timepass=0;
    for(int i=0;i<n;i++)
    {
        stud[i]=i+1;
    }
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        present[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(present[j]==stud[i])
            {

            }
            else{
                timepass++;
                if(timepass==n-1)
                {
                    
                }
            }
        }
    }

    
    return 0;
}