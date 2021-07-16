#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int X;
    cin>>X;
    int a[N];
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum-=(N/2);
    if(sum>X){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}