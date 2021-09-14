#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string words[k];
        for(int i=0;i<k;i++)
            cin>>words[i];
        for(int i=0;i<k;i++){
            int loop=0;
            int change=1;
            for(int j=0;j<words[i].length();j++){
                loop++;    
                if(words[i][j]>='a' && words[i][j]<='m'){
                    if(loop==1){
                        change=1;
                    }
                    else{
                        if(change==2){
                        goto label;
                        }
                    }

                }
                else if(words[i][j]>='N' && words[i][j]<='Z'){
                    if(loop==1){
                        change=2;
                    }
                    else{
                        if(change==1){
                        goto label;
                        }
                    }
                }
                else{
                    goto label;
                }
            }
        }
        cout<<"yes"<<endl;
        goto aage;
        label:
        cout<<"no"<<endl;
        aage:
        continue;
    }
    return 0;
}