#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
        int n,k,count=0;
    while(t--){
        cin>>n>>k;
        char s[n];
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                count=1;
                for(int j=1;j<k;j++){
                    if(s[i+j]=='*'){
                        count++;
                    }
                    else{
                        break;
                    }
                }
            }
            if(count==k){
                cout<<"yes"<<endl;
                count=1;
                goto label;
            }
            count=0;
        }
        cout<<"no"<<endl;
        label:
        continue;
    }
    return 0;
}