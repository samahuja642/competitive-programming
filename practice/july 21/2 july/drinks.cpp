#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    float p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    float result=0;
    for(int i=0;i<n;i++){
        result+=(p[i]/n);
    }
    cout<<result<<endl;
    return 0;
}