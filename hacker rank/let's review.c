#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[10000];
    for(int j=0;j<t;j++)
    {

    
    scanf("%s",&s);
    char even[5001]="",odd[5001]="";
    for(int i=0;i<strlen(s);i++)
    {
        if(i%2==0)
        {
            strcat(even,&s[i]);
            // strncat(even,&s[i],1);
        }
        else
        {
            strcat(odd,&s[i]);
            // strncat(odd,&s[i],1);
        }
        
    }
    printf("%s ",even);
    printf("%s\n",odd);
    }

    return 0;
}