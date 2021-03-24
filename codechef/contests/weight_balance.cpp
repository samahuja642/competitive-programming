#include <iostream>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    for (int y = 0; y < t; y++)
    {
        int w1=0, w2=0, x1=0, x2=0, m=0;
        cin >> w1;
        cin >> w2;
        cin >> x1;
        cin >> x2;
        cin >> m;
        int a = x2 * m;
        int b = x1 * m;
        int c = w2 - w1;
        if (b <= c &&c<= a)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}