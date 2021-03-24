#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sentence[100000];
    scanf("%[^\n]%*c", sentence);
    int words=0;
    int j=0;
    for(int i=0;i<strlen(sentence);i++)
    {
        
        if(sentence[i]==' ')
        {
            int letters=0;
            // if(isalpha(sentence[i]))
            // words++;
            int temp[i-j];
            for(int k=j;k<i-j+1;k++)
            temp[k-j]=sentence[k];
            for(int k=j;k<(i-j+1);k++)
            {
                if(isalpha(temp[k])==1||temp[k]=='-'||temp[i]=='?'||temp[i]=='.'||temp[i]==','||temp[i]=='!')
                {
                    letters++;
                }
            }
            if(letters==(i-j-1))
            {
                words++;
            }
            

            
           
            
        j=i+1;
        }
    }
    printf("%d",words);
    return 0;
}