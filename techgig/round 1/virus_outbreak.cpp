#include<bits/stdc++.h>
using namespace std;
string* subseq(string v,string curr="",int index=0){
    int k=pow(2,v.length());
    string s[k];
    static int i=0;
    if(index==v.length()){
        s[i]=curr;
        i++;
        return s;
    }
    subseq(v,curr+v[index],index+1);
    subseq(v,curr,index+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string v;
    cin>>v;
    int n;
    cin>>n;
    string b[n];
    int k=pow(2,v.length());
    string seq[k]= subseq(v);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    return 0;
}