#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int h = 0; h < t; h++)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array, array + n);
        int diff = 0, count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[j] > j + 1)
            {
                cout << "Second" << endl;
                count++;
                break;
            }
            else
            {
                diff += j + 1 - array[j];
            }
        }
        if (count > 0)
        {
        }
        else
        {
            if (diff % 2 == 1)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }
    return 0;
}