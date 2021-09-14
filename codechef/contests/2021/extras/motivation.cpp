#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int s[n];
        int r[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            cin>>r[i];
        }
        int max_rating=0;
        for(int i=0;i<n;i++){
            if(x>=s[i]){
                if(r[i]>max_rating){
                    max_rating=r[i];
                }
            }
        }
        cout<<max_rating<<endl;
    }
    return 0;
}