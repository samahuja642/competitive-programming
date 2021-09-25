#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        char curr = s[0];
        int curr_index=0;
        int jump = 1;
        while(jump<=k){
            bool something = 0;
            int other = 0;
            for(int j=n-1;j>curr_index;j--){
                if(s[j]==curr)other++;
                else if(s[j]!=curr && other>=(k-jump)/2){
                    curr = s[j];
                    curr_index = j;
                    something=1;
                }
            }
            if(something == 0){
                cout<<-1<<endl;
                goto label;
            }
            jump++;
        }
        cout<<curr_index+1<<endl;
        label:
        continue;
    }
    return 0;
}