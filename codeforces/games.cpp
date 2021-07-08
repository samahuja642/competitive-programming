#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int h[n],a[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==a[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}