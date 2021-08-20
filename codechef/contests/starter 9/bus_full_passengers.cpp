#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        bool result = 1;
        unordered_set<int>s;
        while(q--){
            char ch;
            cin>>ch;
            if(ch == '+'){
                int temp;
                cin>>temp;
                s.insert(temp);
                if(s.size()>m){
                    result = 0;
                }
            }
            else{
                int temp;
                cin>>temp;
                auto it = find(s.begin(),s.end(),temp);
                if(it==s.end()){
                    result = 0;
                }
                else{
                    s.erase(it);
                }
            }
        }
        if(result == 1){
            cout<<"Consistent"<<endl;
        }
        else{
            cout<<"Inconsistent"<<endl;
        }
    }
    return 0;
}