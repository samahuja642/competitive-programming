#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++)
    {if(isupper(a[i]))
    a[i]=tolower(a[i]);
    if(islower(a[i]))
    a[i]=toupper(a[i]);
}
printf("%s",a);
    return 0;
}