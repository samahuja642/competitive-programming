#include<iostream>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int total = t;
    while(t--){
        int n;
        cin>>n;
        string w;
        cin>>w;
        int count = 0;
        stack<int>curr;
        for(int i=0;i<n;i++){
            if(w[i]!='F'){
                if(curr.empty()){
                    curr.push(w[i]);
                }
                else{
                    int temp = curr.top();
                    if(w[i]=='X'||w[i]=='O'){
                        if(temp != w[i]){
                            curr.pop();
                            count++;
                            curr.push(w[i]);
                        }
                    }
                }
            }
        }
        cout<<"Case #"<< (total - t) << ": "<<count<<endl;
    }
    return 0;
}