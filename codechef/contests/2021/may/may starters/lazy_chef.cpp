#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int testcas;
    cin>>testcas;
    while(testcas--){
        int X,M,D;
        cin>>X>>M>>D;
        cout<<min(M*X,X+D)<<endl;
    }
    return 0;
}