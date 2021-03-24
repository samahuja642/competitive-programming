#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int items[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&items[i]);
    }
    int duplicate[n];
    for(int i=0;i<n;i++)
    {
        duplicate[i]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(items[i]==items[j])
            {
                duplicate[i]++;
            }
        }
    }
    int temp,swapped;
    while(1)//it is always true
	{
		swapped=0;
		for(int i=0;i<n-1;i++)
	{
		if(duplicate[i]>duplicate[i+1])
		{
			temp=duplicate[i];
			duplicate[i]=duplicate[i+1];
			duplicate[i+1]=temp;
			temp=items[i];
			items[i]=items[i+1];
			items[i+1]=temp;

			swapped=1;
		}
	
	}
		if(swapped==0)
		break;		
		
	}
    for(int i=0;i<n;i++)
    {
        printf("%d\n",items[i]);
    }
    return 0;
}