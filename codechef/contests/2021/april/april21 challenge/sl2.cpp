#include <iostream>
using namespace std;
int main()
{
    // for faster program
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        char *a = NULL;
        a = new char[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> *(a + i);
        }
        long int count = 0;
        for (long int i = 0; i < n; i++)
        {
            if ((a[i] == '*' && a[i - 1] == '*') || (a[i] == '*' && count == 0))
                count++;
            else
                count = 0;

            if (count == k)
            {
                cout << "yes" << endl;
                goto final;
            }
        }
        cout << "no" << endl;
    final:
        delete[] a;
    }
    return 0;
}