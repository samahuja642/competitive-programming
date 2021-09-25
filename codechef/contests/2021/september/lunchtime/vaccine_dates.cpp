#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int d,l,r;
        cin>>d>>l>>r;
        if(d>r){
            cout<<"Too Late"<<endl;
        }
        else if(d<l){
            cout<<"Too Early"<<endl;
        }
        else{
            cout<<"Take second dose now"<<endl;
        }
    }
    return 0;
}