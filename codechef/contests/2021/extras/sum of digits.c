#include <stdio.h>
#include <string.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    char a[100];
    gets(a);
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int k = 0;
        switch (a[i])
        {
        case '0':
            k = 0;
            break;
        case '1':
            k = 1;
            break;
        case '2':
            k = 2;
            break;
        case '3':
            k = 3;
            break;
        case '4':
            k = 4;
            break;
        case '5':
            k = 5;
            break;
        case '6':
            k = 6;
            break;
        case '7':
            k = 7;
            break;
        case '8':
            k = 8;
            break;
        case '9':
            k = 9;
            break;
        }
        sum +=k;
        printf("%d",k);
    }
    printf("%d",sum);
    return 0;
}