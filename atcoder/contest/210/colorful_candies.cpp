#include<iostream>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    set<int>s;
    for(int i=0 ; i <= n-k+1 ; i++){
        for(i=i;i<i+k;i++){
            s.insert(c[i]);
        }
    }
    return 0;
}