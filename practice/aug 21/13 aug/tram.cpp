#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int exit[n],enter[n];
    int maxcapacity = 0;
    int capacity = 0;
    for(int i=0;i<n;i++){
        cin>>exit[i]>>enter[i];
        capacity=enter[i]+capacity-exit[i];
        maxcapacity = max(maxcapacity,capacity);
    }
    cout<<maxcapacity<<endl;
    return 0;
}