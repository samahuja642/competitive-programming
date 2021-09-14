#include <iostream>
using namespace std;
// typedef int i;
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
        string s;
            cin >> s;
        int count0 = 0, count1 = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else if (s[i] == '1')
            {
                count1++;
            }
            if (count0 <= count1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}