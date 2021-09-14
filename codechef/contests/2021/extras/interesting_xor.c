#include <stdio.h>
#include <math.h>
int main()
{
    long int t;
    scanf("%ld", &t);
    for (long int g = 0; g < t; g++)
    {

        long int d = 0, c;
        scanf("%ld", &c);
        long int timepass = pow(2, d);
        long int max = 0;
        while (timepass <= c)
        {
            d++;
            timepass = pow(2, d);
        }
        long int a = 0, b = 0;
        
            for (long int y = 1; y < timepass; y++)
            {
                if(max < y*(y^c))
                max = y*(y^c);
                }
        printf("%ld\n",max);
        }
        
    
    return 0;
}