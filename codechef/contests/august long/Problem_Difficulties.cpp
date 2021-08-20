#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int a[4];
        map<int,int>m;
        for(int i=0;i<4;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(m.size()==2){
            int label = 1;
            for(auto it=m.begin();it!=m.end();it++){
                if(it->second != 2){
                    label = 0;
                }
            }
            if(label == 0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<m.size()/2<<endl;
        }
    }
    return 0;
}