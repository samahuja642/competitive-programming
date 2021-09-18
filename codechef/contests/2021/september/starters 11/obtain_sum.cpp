#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    unsigned long long t;
    cin>>t;
    while(t--){
        unsigned long long n,s;
        cin>>n>>s;
        unsigned long long sum = (n*(n+1))/2;
        unsigned long long excluded = sum - s;
        if(excluded<=0){
            cout<<-1<<endl;
        } 
        else{
            if(excluded>n)cout<<-1<<endl;
            else cout<<excluded<<endl;
        }
    }
    return 0;
}