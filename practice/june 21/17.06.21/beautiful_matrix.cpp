// link to the problem: "https://codeforces.com/problemset/problem/263/A"
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a[5][5],x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    int diff=abs(x-3)+abs(y-3);
    cout<<diff<<endl;
    return 0;
}