// Given a positive integer n, find count of positive integers i such that 0 <= i <= n and n+i = n^i
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    //naive approach
    // int n;
    // cin>>n;
    // int count = 0;
    // for(int i=0;i<n;i++){
    //     if((n+i)==(n^i)){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
    // using today's learning concept this can be done in O(logn) time complexity.
    int n;
    cin>>n;
    int unset_bits=0;
    int count=1;
    while(n){
        if((n&1)==0){
            unset_bits++;
        }
        n=n>>1;
    }
    count=(1 << unset_bits);
    cout<<count;
    return 0;
}