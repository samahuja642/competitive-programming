#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int testcases = 0; testcases < t; testcases++)
    {
        // number of frogs
        scanf("%d", &n);

        struct weight
        {
            int weight;
            int position;
            int length;
            int rearrangingweight;
        };
        
        struct weight *ptr;
        ptr = (struct weight *)malloc(n * sizeof(struct weight));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &(ptr + i)->weight);
            (ptr + i)->position = i;
            (ptr+i)->rearrangingweight = (ptr + i)->weight;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &(ptr + i)->length);
        }
        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((ptr + i)->weight < (ptr + i + 1)->weight)
            {
                temp = (ptr + i)->rearrangingweight;
                (ptr + i)->rearrangingweight = (ptr + i + 1)->rearrangingweight;
                (ptr + i + 1)->rearrangingweight = temp;
            }
        }
        int numberofhits=0;
        for (int i = 0; i < n-1; i++)
    {
            while ((ptr + i+1)->position > (ptr + i)->position)
            {
                (ptr + i+1)->position += (ptr + i)->length;
                numberofhits++;
            }
    }
    printf("%d",numberofhits);
    }
    return 0;
}