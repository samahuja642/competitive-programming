#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n;
        cin >> k;
        char s[n];
        cin >> s;
        int count = 0;
        
        
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n - i - 1])
                {
                    count++;
                }
            }
        
        if (count >= k)
        {
            cout << "0" << endl;
        }
        else
        {
            if (k - count > 0)
                cout << k - count << endl;
        }

        t--;
    }
    return 0;
}