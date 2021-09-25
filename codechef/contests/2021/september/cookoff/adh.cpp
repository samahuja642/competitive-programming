#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie();cout.tie();}
void solve(){
        int n;
        cin>>n;
        int a[n];
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((a[i]&1)==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }
        if(!odd.empty()&&!even.empty()){
            for(int i=0;i<even.size();i++){
                cout<<even[i]<<" ";
            }
            for(int i=0;i<odd.size();i++){
                cout<<odd[i]<<" ";
            }
            even.clear();
            odd.clear();
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }    
}
int main(){
    auto start = std::chrono::high_resolution_clock::now();
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    auto finish = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}