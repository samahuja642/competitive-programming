#include <stdio.h>
int main()
{
    // number to be converted to binary conversion
    int n;
    scanf("%d", &n);
    int arr[20];
    int temp = n;
    for (int i = 0; i < 20; i++)
    {
        arr[i] = temp % 2;
        temp = temp / 2;
    }
    int a[20];
    for (int i = 19; i >= 0; i--)
    {
        a[19 - i] = arr[i];
    }
    int consecutive = 0, max = 0;
    for (int i = 0; i <= 19; i++)
    {
        consecutive = 1;
        for (int j = i; j < 19; j++)
        {

            if (a[j] == a[j + 1] && a[j] == 1)
            {
                consecutive++;
            }
            else{break;}

        }
            if (consecutive >= max)
            {
                max = consecutive;
            }
    }
    printf("%d", max);
    return 0;
}