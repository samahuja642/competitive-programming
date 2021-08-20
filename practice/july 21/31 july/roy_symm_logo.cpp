// link -> https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
#include<iostream>
#include<algorithm>
using namespace std;
bool isPalindrome(string s){
    string a=s;
    reverse(s.begin(),s.end());
    if(a==s){
        return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        bool pass = 1;
        for(int i=0;i<n;i++){
            pass=isPalindrome(s[i]);
            if(pass == 0){
                cout<<"NO"<<endl;
                goto label;
            }
        }
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                pass = 0;
                cout<<"NO"<<endl;
                goto label;
            }
        }
        cout<<"YES"<<endl;
        label:
        continue;
    }
    return 0;
}