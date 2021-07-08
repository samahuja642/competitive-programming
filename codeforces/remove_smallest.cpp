#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            int diff = a[i + 1] - a[i];
            if (diff > 1)
            {
                cout << "NO" << endl;
                goto label;
            }
        }
        cout << "YES" << endl;
    label:
    continue;
    }
    return 0;
}