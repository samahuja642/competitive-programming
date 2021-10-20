#include<iostream>
#include<cmath>
using namespace std;
int digits(int digit[],int n){
    int count=0;
    while(n!=0){
        digit[count]=n%10;
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int digit[10]={0};
        int num_d = digits(digit,n);
        int store=-1;
        for(int i=0;i<=num_d;i++){
            if(digit[i]==k){
                store = i;
            }
        }
        int ans = 0;
        for(int i=0;i<store;i++){
            ans += pow(10,i)*digit[i];
        }
        for(int i=0;i<=num_d;i++){
            cout<<digit[i]<<" ";
        }
        cout<<endl;
        cout<<"store"<<store<<endl;
        if(store==-1){
            cout<<0<<endl;
        }
        else if(store==0){
            cout<<1<<endl;
        }
        else{
            cout<<pow(10,store)-ans<<endl;
        }
    }    

    return 0;
}