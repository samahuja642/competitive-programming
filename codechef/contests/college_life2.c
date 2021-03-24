#include <stdio.h>
int eligible(int n, int e, int h, int a, int b, int c)
{
    int number_of_friends_will_get = 0;
    int left;
    if (e > h)
    {
        number_of_friends_will_get = h;
        left = e - h;
        number_of_friends_will_get += (left / 2);
    }
    else
    {
        number_of_friends_will_get = e;
        left = h - e;
        number_of_friends_will_get += (left / 3);
    }
    if (number_of_friends_will_get >= n)
    {
        return 0;
    }
    else
    {
        printf("-1\n");
        return -1;
    }
}

int main()
{
    int n, e, h, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d %d %d", &e, &h, &a, &b, &c);
    int y = eligible(n, e, h, a, b, c);
    if (y = 0)
    {
        
    }
    return 0;
}