#include<iostream>
#include<algorithm>
using namespace std;
void func(int a[],int choice,int n){
    if(choice == 1){
        int temp = 1;
        while(temp<=(n-2)){
            if(a[temp]>a[temp+1]){
                swap(a[temp],a[temp+1]);
            }
            temp+=2;
        }
    }
    else{
        int temp = 2;
        while(temp<=(n-1)){
            if(a[temp]>a[temp+1]){
                swap(a[temp],a[temp+1]);
            }
            temp+=2;
        }
    }
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
        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++)cin>>a[i];
        int b[n+1];
        b[0]=0;
        for(int i=1;i<=n;i++)b[i]=a[i];
        sort(b+1,b+n+1);
        bool done = 1;
        for(int i=1;i<=n;i++){
                if(a[i]!=b[i]){done=0;}
        }
        if(done==0){
            for(int i=1;i<=n;i++){
                if((i&1)==1)func(a,1,n);
                else func(a,2,n);
                bool ok=1;
                for(int i=1;i<=n;i++){
                    if(a[i]!=b[i]){ok=0;break;}
                }
                if(ok==1){
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}