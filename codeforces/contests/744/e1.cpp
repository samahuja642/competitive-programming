#include<iostream>
#include<deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        deque<int>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(q.size()==0){
                q.push_back(a[i]);
            }
            else{
                if(q.front()>a[i]){
                    q.push_front(a[i]);
                }
                else{
                    q.push_back(a[i]);
                }
            }
        }
        for(auto it:q){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}