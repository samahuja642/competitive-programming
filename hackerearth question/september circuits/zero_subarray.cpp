#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = y;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; (j + i) <= n; j++)
            {
                int l = i;
                int r = i + j;
                if (j <= y)
                {
                    maxi = max(j, maxi);
                }
                else
                {
                    vector<int> v;
                    for (int k = l; k <= r; k++)
                    {
                        v.push_back(a[k]);
                    }
                    sort(v.begin(), v.end());
                    int done = 0;
                    for (int k = l; k <= r; k++)
                    {
                        if (x >= v[k - l])
                        {
                            x -= v[k - l];
                            v[k - l] = 0;
                            done++;
                        }
                        else
                        {
                            goto label;
                        }
                    }
                    label:
                    if ((j - done) <= y)
                    {
                        maxi = max(j,maxi);
                    }
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
