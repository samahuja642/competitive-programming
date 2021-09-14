#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    vector<int,int>xc;
    vector<int,int>yc;
    while(n--){
        int x,y;
        cin>>x>>y;
        xc[x]=y;
    }

    return 0;
}