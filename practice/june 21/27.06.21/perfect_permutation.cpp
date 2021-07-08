#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    if(n&1==1){
        cout<<"-1"<<endl;
    }
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<n;i+=2){
            swap(arr[i],arr[i+1]);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}