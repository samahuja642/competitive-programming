#include <stdio.h>
int main()
{
    //testcases
    int testcases = 0;
    int t;
    scanf("%d", &t);
    int n = 0;
label:
    //number of frogs

    scanf("%d", &n);
    // taking inputs
    int numberofhits = 0;
    int w[n], l[n], position[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
        position[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l[i]);
    }
    // sorting them
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (w[i] < w[i + 1])
        {
            temp = w[i];
            w[i] = w[i + 1];
            w[i + 1] = temp;
            temp = l[i];
            l[i] = l[i + 1];
            l[i + 1] = temp;
            temp = position[i];
            position[i] = position[i + 1];
            position[i + 1] = temp;
        }
    }
    // calculations for number of hits
    for (int i = 0; i < n; i++)
    {
        if (w[i] < w[i + 1])
        {
            while (position[i + 1] > position[i])
            {
                position[i + 1] += l[i];
                numberofhits++;
            }
        }
    }
    // printing number of hits
    printf("%d\n", numberofhits);
    testcases++;
    if (testcases < t)
    {
        goto label;
    }

    return 0;
}