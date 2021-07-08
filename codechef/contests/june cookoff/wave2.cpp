#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x[q];
    for(int i=0;i<q;i++){
        cin>>x[i];
    int negative=0;
        for(int j=0;j<n;j++){
            if(x[i]==a[j]){
                goto label;
            }
            else if(x[i]<a[i]){
                negative++;
            }
            else{
                break;
            }
            
        }
        if((negative&1)==0){
            cout<<"POSITIVE"<<endl;
            goto end;
        }
        else if((negative&1)==1){
            cout<<"NEGATIVE"<<endl;
            goto end;
        }
        label:
        cout<<"0"<<endl;
        end:
        continue;
    }
    return 0;
}