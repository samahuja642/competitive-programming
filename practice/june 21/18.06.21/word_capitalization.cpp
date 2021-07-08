#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string str;
    cin>>str;
    if(str[0]>90){
        str[0]-=32;
    }
    cout<<str<<endl;
    return 0;
}