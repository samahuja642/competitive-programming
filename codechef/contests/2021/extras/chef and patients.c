#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int b[n];
        for(int i=0;i<n;i++)
        b[i]=a[i];
        int swapped,temp;
        int position[n];
		for(int i=0;i<n-1;i++)
        {
            position[i]=i;
        }
        	while(1)
	{
		swapped=0;
		for(int i=0;i<n-1;i++)
	{
		if(b[i]>b[i+1])
		{
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
			// temp=position[i];
			// position[i]=position[i+1];
			// position[i+1]=temp;
			swapped=1;
		}
	
		if(swapped==0)
		break;		
	}
		
	}
		for(int i=0;i<n-1;i++)
	{
		if(b[i]>b[i+1])
		{
			
			temp=position[i];
			position[i]=position[i+1];
			position[i+1]=temp;
			swapped=1;
		}
	
		if(swapped==0)
		break;		
	}
		
	
        // int hours[n];
        // for(int i=0;i<n;i++)
        // {
            
        // }
        for(int i=0;i<n;i++)
        {
            printf("%d",position[i]);
        }
    }
    return 0;
}