#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cin >> a;
    while (a != 42)
    {
        cout << a << endl;
        cin >> a;
    }
    return 0;
}