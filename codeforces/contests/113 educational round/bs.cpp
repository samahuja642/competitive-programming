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
        for(int i=0;i<s.length();i++){
            for(int size=0;(i+size)<s.length();size++){
                string str=s.substr(i,size);
                int s_a=0,s_b=0;
                for(int i=0;i<str.length();i++){
                    if(str[i]=='a'){
                        s_a++;
                    }
                    else{
                        s_b++;
                    }
                }
                cout<<s_a<<" "<<s_b<<endl;
                if(s_a==s_b){
                    cout<<i+1<<" "<<(i+size+1)<<endl;
                    goto label;
                }
            }
        }
        cout<<-1<<" "<<-1<<endl;
        label:
        continue;
    }
    return 0;
}