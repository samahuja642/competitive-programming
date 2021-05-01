#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int current_sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0){
            count++;
        }
    }
    if(count==n){
    for(int i=1;i<=n-1;i++){
        cout<<i;
    }    
    }
    current_sum=a[0];
    for(int i=1;i<n-1;i++){
        if(current_sum==(sum-current_sum-a[1])){
            cout<<i<<endl;
        }
        else{
            current_sum+=a[i];
        }
    }
    return 0;
}