#include<iostream>
using namespace std;
int xora[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    xora[1]=0;
    for(int i=2;i<100001;i++){
        xora[i]=xora[i-1]^(i-1);
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int answer = a;
        int ans_xor = xora[a];
        if(b==a){
            cout<<a+2<<endl;
        }
        else{
            if((ans_xor^b)<a){
                cout<<a+1<<endl;
            }
            else if((ans_xor^b)==a){
                cout << "that 's not the case";
                cout<<a<<endl;
            }
            else{
                cout<<a+1<<endl;
            }
        }
    }
    return 0;
}