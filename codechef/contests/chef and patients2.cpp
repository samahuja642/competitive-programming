#include <iostream>

using namespace std;

int main()
{
    int n, count;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        cin >> s;
        if (s[0] == '1')
            count++;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] == '1' && s[j - 1] != '1')
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}