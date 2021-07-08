// https://codeforces.com/problemset/problem/144/A
#include<iostream>
#include<climits>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int a[n];
    int largest=INT_MIN,smallest=INT_MAX,largest_index,smallest_index;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>largest){
            largest=a[i];
            largest_index=i;
        }
        if(a[i]<=smallest){
            smallest=a[i];
            smallest_index=i;
        }
    }
    int result=(largest_index>smallest_index)?(largest_index+n-smallest_index-1-1):(largest_index+n-smallest_index-1);
    cout<<result<<endl;
    return 0;
}