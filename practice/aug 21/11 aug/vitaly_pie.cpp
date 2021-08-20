#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>st;
    int count=0;
    for(int i=0;i<s.length();i++){
        if((i&1)==0){
            st.insert(s[i+1]);
            auto it=st.find(s[i]-('a'-'A'));
            if(it == st.end()){
                count++;
            }
            else st.erase(s[i]-('a'-'A'));
        }
    }
    cout<<count<<endl;
    return 0;
}