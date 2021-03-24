#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    printf("enter the size of the array you want to create\n");
    int a;
    scanf("%d",&a);
    ptr=(int*)malloc(a*sizeof(int));
    int sum=0;
    
    for(int j=0;j<a;j++)
    {
        printf("enter the %d element",j+1);
        scanf("%d",&ptr[j]);
        sum+=ptr[j];
    }
    printf("sum is this %d \n",sum);
    free(ptr);
    printf("memory is freed");
    return 0;
}