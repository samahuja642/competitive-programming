#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int result = 0 ;
        for(int i=0;i<n;i++){
            if((s[i]!='0')&&(i!=n-1))result++;
            result += int(s[i]-'0');
        }
        cout<<result<<endl;
    }
    return 0;
}