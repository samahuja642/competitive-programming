#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);
    char store[20];
    int remove=0;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<=20;j++)
        {
            if(a[i]==b[j])
            {
                static int h=0;
                store[h]=a[i];
                h++;
            }
        }
    }
    printf("%d",strlen(a)+strlen(b)-(strlen(store)));
    return 0;
}