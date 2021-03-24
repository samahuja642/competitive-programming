#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    struct phonebook
    {
        char name;
        long int phone;
    } a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i].name);
        scanf("%ld", &a[i].phone);
    }
    int notthere = 0;
    char b;
    scanf("%s", &b);
    while ((getchar()) != '\n');
    for (int i = 0; i < n; i++)
    {
        if (b == a[i].name)
        {
            printf("%s=%ld", b, a[i].phone);
            break;
        }
        else
        {
            notthere++;
        }
    }
    if (notthere == n)
    {
        printf("Not found");
    }
    return 0;
}