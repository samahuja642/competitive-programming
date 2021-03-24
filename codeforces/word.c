#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int upper=0,lower=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(isupper(a[i]))
        {
            upper++;
        }
        if(islower(a[i]))
        {
            lower++;
        }

    }
    if(upper<=lower)
    {
        for(int i=0;i<strlen(a);i++)
        {
            a[i]=tolower(a[i]);
        }
        printf("%s",a);
    }
    else
    {
       for(int i=0;i<strlen(a);i++)
        {
            a[i]=toupper(a[i]);
        }
        printf("%s",a);
    }
    return 0;
}