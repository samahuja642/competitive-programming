// link to the problem: "https://codeforces.com/problemset/problem/69/A"
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int x,y,z,sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        cin>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}