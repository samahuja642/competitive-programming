#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int num0=0,num1=0;
        for(auto i:s){
            if(i=='0'){
                num0++;
            }
            else{
                num1++;
            }
        }
        int time = num0*a + num1*b ;
        cout<<time<<endl;
    }
    return 0;
}