#include <stdio.h>
int main()
{
    long int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%ld", &arr[i]);
    long int temp = 0;
    for (int k = 0; k < 4; k++)
    {

        for (int i = 0; i < 5 - k - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    long long int t_1 = (arr[0] + arr[1] + arr[2] + arr[3]);
    long long int t_2 = (arr[4] + arr[1] + arr[2] + arr[3]);
    printf("%lld ", t_1);
    printf("%lld", t_2);
    return 0;
}
