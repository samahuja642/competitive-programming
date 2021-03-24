#include<stdio.h>
int main()
{
    // why when we are using char x; it is giving me a buffer so that is a nice practice to make it a array
    char x[30];
    scanf("%s",&x);
    printf("Hey %s, Welcome to the world of CP",x);
    return 0;
}