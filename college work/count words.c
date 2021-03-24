#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int vowels=0,consonants=0;
    for(int i=0;i<strlen(a);i++)
    {
        if (a[i]=='a'|a[i]=='e' |a[i]=='i' |a[i]=='o' |a[i]=='u')
        vowels++;
        else
        {
            consonants++;
        }
        
    }
    printf("%d that many vowels are there \n",vowels);
    printf("%d that many consonants are there \n",consonants);
    return 0;
}