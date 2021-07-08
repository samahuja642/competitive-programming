#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    cin>>c[i];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[c[j]-1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}