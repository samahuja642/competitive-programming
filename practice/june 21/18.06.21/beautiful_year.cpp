// link to this problem is : "https://codeforces.com/problemset/problem/271/A"
#include <iostream>
using namespace std;
bool alldifferent(int a[])
{
    bool some = 1;
    for (int i = 1; i < 4; i++)
    {
        int j = 0;
        while (j < i)
        {
            if (a[j] == a[i])
            {
                some = 0;
            }
            j++;
        }
    }
    return some;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int year;
    int a[4];
    cin >> year;
    int j = 3;
    while (year)
    {
        a[j] = (year % 10);
        j--;
        year /= 10;
    }
    do
    {
        a[3]++;
        if (a[3] == 10)
        {
            a[3] = 0;
            a[2]++;
            if (a[2] == 10)
            {
                a[2] = 0;
                a[1]++;
                if (a[1] == 10)
                {
                    a[1] = 0;
                    a[0]++;
                }
            }
        }
    } while (!alldifferent(a));
    for (int i = 0; i < 4; i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}