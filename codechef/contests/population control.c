#include <stdio.h>
int main()
{
    int t;
    // number of testcases
    scanf("%d", &t);
    int n;
    for (int j = 1; j <= t; j++)
    {
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int temp,swapped;
        while(1)//it is always true
	{
		swapped=0;
		for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			swapped=1;
		}
	
	}
		if(swapped==0)
		break;		
		
	}
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    }
    return 0;
}