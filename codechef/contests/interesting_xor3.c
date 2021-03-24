#include<stdio.h>
#include<math.h>
void main()
{
    int t;
    scanf("%d",&t);
    for(int y=0;y<t;y++)
    {
        int max=-999;
        int c;
        scanf("%d",&c);
        int d=ceil(log(c)/log(2));
        int p=pow(2,d);
        for(int j = 0; j < p; j++){
            if(max < j*(j^c))
                max = j*(j^c);
        }
        printf("%d\n",max);

    }
}