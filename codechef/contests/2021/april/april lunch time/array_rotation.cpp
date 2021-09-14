#include <iostream>
using namespace std;
typedef int in;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    in arr[n];
    for (in i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int x;
    while (q--)
    {
        cin >> x;
        for (int i = 0; i < n - x; i++)
        {
            arr[i + x] += arr[i];
        }
        for (int i = n - x; i < n; i++)
        {
            arr[i] += arr[n - i];
        }
    }
    return 0;
}