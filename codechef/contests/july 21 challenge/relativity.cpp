#include<iostream>
using namespace std;
typedef long long ll;
#define Mod 1e9+7
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int g,c;
        cin>>g>>c;
        int h=((c*c)/(2*g));
        cout<<h<<endl;
    }
    return 0;
}