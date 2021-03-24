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
int* digits(int N) 
{ 
    int r; 
  
    if (N == 0) { 
        return; 
    } 
  
    r = N % 10; 
  
    digits(N / 10);
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
    int *ptr;
    int a[9];
    ptr=&a[0];
    ptr=*(digits(k));
    // printf("%d",sumprimedigits(k));
    return 0;
}