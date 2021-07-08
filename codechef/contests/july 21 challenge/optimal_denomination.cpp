#include<iostream>
#include<climits>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int smallest=INT_MAX,sindex=-1,lindex,largest=INT_MIN,secondmin,smindex;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=smallest){
                secondmin=smallest;
                smindex=sindex;
                smallest=a[i];
                sindex=i;
            }
            if(a[i]>largest){
                largest=a[i];
                lindex=i;
            }
        }
    }
    return 0;
}