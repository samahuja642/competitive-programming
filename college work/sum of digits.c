#include<stdio.h>
#include<math.h>
int numberofdigits(int k)
{
    int result=1,j,i=1,digits;
    while(result!=0)
    {
        result=1;
        j=pow(10,i);
        result=k/j;        
        digits=i;
        i++;
    }
    return digits;
}
int* digit(int N) 
{ 
    int r; 
  
    if (N == 0) { 
        return; 
    } 
  
    r = N % 10; 
  
    digit(N / 10);
    int a[9];
    int i=0; 
    a[i]=r;
    i++;
    return &a[0];
} 
int main()
{
    int k;
    scanf("%d",&k);
    int digits=numberofdigits(k);
    int a[9];
    for(int i=0;i<digits;i++)
    a[i]=*(digit(k)+i);
    
    return 0;
}