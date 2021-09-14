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
    int n, e, h, price[3][2];
    scanf("%d", &n);
    scanf("%d %d %d %d %d", &e, &h, &price[0][0], &price[1][0], &price[2][0]);
    int y = eligible(n, e, h, price[0][0],price[1][0] ,price[2][0] );
    if (y = 0)
    {
        if(price [0][0]>price[1][0]&&price[0][0]>=price[2][0])
        {
            price[0][1]==3;
            if(price[1][0]>=price[2][0])
            {
                price[1][1]=2;
                price[2][1]=1;
            }
            else{
                price[2][1]=2;
                price[1][1]=1;
            }
        }
        else if(price [1][0]>price[0][0]&&price[1][0]>=price[2][0])
        {
            price[1][1]==3;
            if(price[0][0]>=price[2][0])
            {
                price[0][1]=2;
                price[2][1]=1;
            }
            else{
                price[2][1]=2;
                price[0][1]=1;
            }
        }
        else if(price [2][0]>price[0][0]&&price[2][0]>price[1][0])
        {
            price[2][1]==3;
            if(price[0][0]>price[1][0])
            {
                price[0][1]=2;
                price[1][1]=1;
            }
            else{
                price[1][1]=2;
                price[0][1]=1;
            }
        }
    for(int i=0;i<3;i++)
    {
        printf("\n%d",price[i][1]);
    }
    }
    return 0;
}