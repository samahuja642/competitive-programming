#include<stdio.h>
#include<string.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    char s;
    scanf("%s",&s);
    char *poin=&s;
    char temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        {
        if(*(poin+i)==*(poin+j))
        {
            temp=*(poin+i);
        }
        }

    }
    return 0;
}