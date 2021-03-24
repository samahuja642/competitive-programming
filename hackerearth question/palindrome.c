#include<stdio.h>
#include<string.h>
char reverse(char b[100])
{
char r[100];
for(int i=0;i<strlen(b);i++)
{
    r[i]=b[strlen(b)-i-1];
}
return r;
}
int main()
{
    char a[100];
    gets(a);
    char k=reverse(a);
    if(k==a)
    printf("YES");
    else 
    printf("NO");

    return 0;
}