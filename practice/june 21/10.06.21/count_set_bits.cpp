#include<iostream>
#include<bits//stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    // naive approach
    // int count=0;
    // while(n){
    //     count+=n&1;
    //     n=n>>1;
    // }


    // brian kernighan's algorithm
    // while(n){
    //     n &=(n-1);
    //     count++;
    // }
    // using lookup table
    // using builtin function

    cout<<__builtin_popcount(n);
    // cout<<count<<endl;
    return 0;
}