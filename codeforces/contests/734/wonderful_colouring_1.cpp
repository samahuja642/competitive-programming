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
        string s;
        cin >> s;
        bool checked[s.length()] = {0};
        int number_color = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (checked[i] == 0)
            {
                int temp = 0;
                for (int j = i; j < s.length(); j++)
                {
                    if (s[i] == s[j])
                    {
                        temp++;
                        checked[j] = 1;
                    }
                }
                if (temp >= 2)
                {
                    number_color += 2;
                }
                else if (temp == 1)
                {
                    number_color += 1;
                }
            }
        }
        cout << number_color / 2 << endl;
    }
    return 0;
}