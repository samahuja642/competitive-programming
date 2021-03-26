#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int start, end;
        cin >> start >> end;
        int count = 0;
        for (int i = start; i <= end; i++)
        {
            count = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
            if (count == 0 && i != 1)
                cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}