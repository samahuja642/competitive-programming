#include<iostream>
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
        int count[n]={0};
        for(int i=0;i<n;i++){
            if(i==0&&s[i]=='a'){
                count[i]++;
            }
            else if(s[i]=='a'){
                count[i]=count[i-1]+1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(count[j] - count[i-1]==(i+1-count[j] + count[i-1])){
                    cout<<i<<" "<<j<<endl;
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