#include <stdio.h>
// yaar ye sirf ek term lene ke liye use karra hai
int sums(int *ptr, int iteration)
{
    int element = 1;
    for (int i = 0; i < iteration; i++)
    {
        element ^= *(ptr + i);
    }
    return element;
}
int subsequent(int *ptr, int r, int n)
{
    int sum = 1;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int queries;
    scanf("%d", &queries);
    int m[queries];
    for (int i = 0; i < queries; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = m[queries - 1]; i >= 1; i--)
    {
        subsequent(&a[0], m[i], n);
    }
    return 0;
}