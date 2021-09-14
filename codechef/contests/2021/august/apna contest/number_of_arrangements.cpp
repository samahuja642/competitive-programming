#include<iostream>
using namespace std;
int fact(int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<fact(s.length())<<endl;
    }
    return 0;
}