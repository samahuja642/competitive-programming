// link -> https://www.codechef.com/problems/STONES
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int result=0;
        string j,s;
        cin>>j>>s;
        for(int i=0;i<s.length();i++){
            if(j.find(s[i])< j.length()){
                result++;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}