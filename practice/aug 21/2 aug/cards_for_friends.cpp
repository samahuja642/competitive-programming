// link -> https://codeforces.com/problemset/problem/1472/A
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        int count = 1;
        while(w%2 == 0 || h%2 == 0){
            if(w%2 == 0){
                count *= 2 ;
                w = w/2;
            }
            else if(h%2 == 0){
                count *= 2 ;
                h = h/2;
            }
            if(count >= n){
                break;
            }
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}