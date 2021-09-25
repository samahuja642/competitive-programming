#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (((n / 2) & 1) == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n / 4; i++)
            {
                cout << i << " ";
            }
            for (int i = ((3 * n) / 4) + 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            for (int i = n / 4 + 1; i <= ((3 * n) / 4); i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}