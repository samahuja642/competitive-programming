#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // int t;
    // scanf("%d", &t);
    // label:

    int a = 0;
    scanf("%d", &a);
    int p[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &p[i]);
    }
    // int xor(int k)
    // {
    //     if (k == 1)
    //     {
    //         return p[i];
    //     }
    // }
    int h = 0;
    for (int k = 1; k < a; k++)
    {

        if (k == 1)
        {
            for (int i = 0; i < a; i++)
            {
                if (p[i] % 2 == 0)
                {
                    h++;
                }
            }
        }
         if (k == 2)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    if ((p[i] ^ p[j]) % 2 == 0)
                    {
                        h++;
                    }
                }
            }
        }
        if (k == 3)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    for (int k = 0; k < a; k++)
                    {
                        if ((p[i] ^ p[j] ^ p[k]) % 2 == 0)
                        {
                            h++;
                        }
                    }
                }
            }
        }
         if (k == 4)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    for (int k = 0; k < a; k++)
                    {
                        for (int l = 0; l < a; l++)
                        {
                            if ((p[i] ^ p[j] ^ p[k] ^ p[l]) % 2 == 0)
                            {
                                h++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", h);
    return 0;
}