#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        switch(x%4){
            case 0:
            cout<<"North"<<endl;
            break;
            case 1:
            cout<<"East"<<endl;
            break;
            case 2:
            cout<<"South"<<endl;
            break;
            case 3:
            cout<<"West"<<endl;
            break;
        }
    }
    return 0;
}