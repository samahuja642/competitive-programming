#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a, b;
    cin>>a>>b;
    double c;
    c= double(a-b)/double(3) + b;
    cout<<setprecision(10)<<c<<endl;
    return 0;
}