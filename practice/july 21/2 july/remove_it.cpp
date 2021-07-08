#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    long long x;
    cin>>x;
    vector<long long>a;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        if(temp!=x){
            a.push_back(temp);
        }
    }
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}