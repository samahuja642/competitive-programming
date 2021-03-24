#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[100];
    gets(a);
    char b[100];
    static int j = 0;
    for (int i = 0; i < strlen(a); i++)
    {

        if (a[i] == '+')
        {
            b[j] = a[i - 1];
        }
        j++;
    }
    b[j] = a[strlen(a) - 1];
    int temp = 0;
    for (int i = 0; i < j; i++)
    {
        if (b[i] > b[i + 1])
        {
            temp = b[i];
            b[i] = b[i + 1];
            b[i + 1] = temp;
        }
    }
    printf("%c", b[0]);
    for (int i = 1; i <= j; i++)
        printf("%c%c", '+', b[i]);
    return 0;
}