#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    while(n--){
        string temp;
        cin>>temp;
        if(temp.length()>10)cout<<temp[0]<<temp.length()-2<<temp[temp.length()-1]<<endl;
        else cout<<temp<<endl;
    }
    return 0;
}