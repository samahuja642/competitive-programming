#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n];
        long int count=0,sum=0,noproblem=0;
        for(long int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if((a[i]/2)-1<=0)
                noproblem=1;
            if(a[i]==1||a[i]==0)
                count++;
        }
        if(count!=n){
            if(sum%2==0){
                cout<<"0"<<endl;
            }
            else if(sum%2!=0&&noproblem==1){
                cout<<"1"<<endl;
            }
            else if(sum%2!=0&&noproblem==0){
                cout<<"-1"<<endl;
            }
        }
        else{
            if(sum%2==0){
                cout<<"0"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}