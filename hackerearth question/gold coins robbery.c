#include <stdio.h>
#include <math.h>
int main()
{
    int n, p = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int s = 0, t = 0; //gold for shubam and tushar
    int greatest = 0, position = 0, robbed[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > greatest)
            greatest = a[i];
        position = i;
        robbed[0] = position;
    }
    s = greatest;
    if (position - 1 >= 0 & position + 1 < n)
    {
        if (a[position - 1] >= a[position + 1])
        {
            t = a[position - 1];
            position = position - 1;
            robbed[1] = position;
        }
        else
        {
            t = a[position + 1];
            position = position + 1;
            robbed[1] = position;
        }
    }
    else if (position - 1 >= 0)
    {
        t = a[position - 1];
        position = position - 1;
        robbed[1] = position;
    }
    else if (position + 1 < n)
    {
        t = a[position + 1];
        position = position + 1;
        robbed[1] = position;
    }
    else
    {
        t = a[rand() % n];
        position = rand() % n;
        robbed[1] = position;
    }
    int k = 0, r = 1;
    for (int j = 2; j < n; j++)
    {

        if (j % 2 == 0)
        {
            k = s;
            for (p = 0; p < n; p++)
            {
                if (position - 1 >= 0 & position + 1 < n)
                {
                    if (a[position - 1] >= a[position + 1])
                    {
                        for (p = 0; p < n; p++)
                        {
                            if (position - 1 == robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[rand() % n];
                                position = rand() % n;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 == robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                        }
                    }
                    else
                    {
                        for (p = 0; p < n; p++)
                        {
                            if (position - 1 == robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[rand() % n];
                                position = rand() % n;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 == robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                        }
                    }
                }
                else if (position - 1 >= 0)
                {
                    k += a[position - 1];
                    position = position - 1;
                    robbed[r] = position;
                    r++;
                }
                else if (position + 1 < n)
                {
                    k += a[position + 1];
                    position = position + 1;
                    robbed[r] = position;
                    r++;
                }
                else if (position - 1 < 0 & position + 1 >= n)
                {
                    k += a[rand() % n];
                    position = rand() % n;
                    robbed[r] = position;
                    r++;
                }
            }
            s = k;
        }
        //next tushar one
        else
        {
            k = t;

            {
                if (position - 1 >= 0 & position + 1 < n)
                {
                    if (a[position - 1] > a[position + 1])
                    {
                        for (p = 0; p < n; p++)
                        {
                            if (position - 1 == robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[rand() % n];
                                position = rand() % n;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 == robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                        }
                    }
                    else
                    {
                        for (p = 0; p < n; p++)
                        {
                            if (position - 1 == robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[rand() % n];
                                position = rand() % n;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 == robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 == robbed[p])
                            {
                                k += a[position - 1];
                                position = position - 1;
                                robbed[r] = position;
                                r++;
                            }
                            else if (position - 1 != robbed[p] & position + 1 != robbed[p])
                            {
                                k += a[position + 1];
                                position = position + 1;
                                robbed[r] = position;
                                r++;
                            }
                        }
                    }
                }
                else if (position - 1 >= 0)
                {
                    k += a[position - 1];
                    position = position - 1;
                    robbed[r] = position;
                    r++;
                }
                else if (position + 1 < n)
                {
                    k += a[position + 1];
                    position = position + 1;
                    robbed[r] = position;
                    r++;
                }
                else if (position - 1 < 0 & position + 1 >= n)
                {
                    k += a[rand() % n];
                    position = rand() % n;
                    robbed[r] = position;
                    r++;
                }
            }
            t = k;
        }
    }
    printf("%d %d", s, t);
    return 0;
}