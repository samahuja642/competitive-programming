#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int fingers[n+1];
    int total_fingers=0;
    for(int i=1;i<=n;i++){
        cin>>fingers[i];
        total_fingers+=fingers[i];
    }
    int count=0;
    for(int i=1;i<=5;i++){
        if(((total_fingers+i)%(n+1))!=1)count++;
    }
    cout<<count<<endl;
    return 0;
}