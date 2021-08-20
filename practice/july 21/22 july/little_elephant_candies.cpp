// link to the problem :- https://www.codechef.com/problems/LECANDY
#include<iostream>
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
        int c;
        cin>>c;
        int a[n],sum=0;
        for(int i:a){
            cin>>i;
            sum+=i;
        }
        if(sum<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}