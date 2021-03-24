#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char S1,S2;
    printf("enter first string\n");
    scanf("%s",&S1);
    printf("enter second string\n");
    scanf("%s",&S2);
    char *pointer;
    pointer=(char *)malloc(strlen(S1)*sizeof(char));
    pointer=&S1;
    int k=rand()%6+2;
    char substring[k];
     char *poin;
     poin=(char *)malloc(strlen(S2)*sizeof(char));
     poin=&S2;
     int notthere=0;
     char *address=&S1;
    for(int i=0;i<k;i++)
    {
        label:
        address=(pointer+rand()%strlen(S1)+1);
        substring[i]=*address;
        for(int j=0;j<strlen(S2);j++)
        {
        if(substring[i]==*(poin+j))
        {
            break;
        }
        else
        {
            notthere+=1;
        }
        }
        if(notthere==strlen(S2))
        goto label;
    }
    for(int i=0;i<k;i++)
    {
        printf("%c",substring[i]);
    }
    

   
    
    return 0;
}