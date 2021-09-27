#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
int32_t main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int m = 1;
        bool ispossible = false;
        for (int i = 0; i < 100; i++)
        {
            m = ((m % a) * (b % a)) % a;
            if (m == 0)
            {
                ispossible = true;
                break;
            }
        }
        if (ispossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}