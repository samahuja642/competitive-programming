#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a.substr(i,5)==b)
        {
            flag = 1;
            break;
        }
    }
    cout << flag << endl;
    return 0;
}