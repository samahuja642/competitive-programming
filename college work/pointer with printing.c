#include<stdio.h>
int main()
{
    int a;
    int* ptr=&a;
    printf("enter number:");
    scanf("%d",&a);
    printf("%d",*ptr);
    return 0;
}