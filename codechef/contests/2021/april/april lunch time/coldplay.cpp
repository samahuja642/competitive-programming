#include<iostream>
using namespace std;
typedef int integer;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    integer M;
    integer S;
    cin>>M;
    cin>>S;
    cout<<(int)M/S;
    return 0;
}