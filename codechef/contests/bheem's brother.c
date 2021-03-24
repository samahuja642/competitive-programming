#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        char s[100];
        scanf("%s",&s);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                continue;
            }
            else
            {
                s[i]=toupper(s[i]);
            }
            
        }

        for(int i=0;i<strlen(s);i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}