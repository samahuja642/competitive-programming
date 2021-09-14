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
        int x[n],y[n];
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<n;i++)cin>>y[i];
        int equal_index = 0;
        for(int i=0;i<n;i++){
            if(x[i]==y[i]){
                equal_index = i;
                break;
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(i!=equal_index&&((x[i]==y[i]&&x[i]!=equal_index)||(abs(x[equal_index]-x[i])==abs(y[equal_index]-y[i]))||(x[i]==x[equal_index]&&y[i]!=y[equal_index])||(x[i]!=x[equal_index]&&y[i]==y[equal_index]))){
                count++;
            }
            else if(equal_index!=i&&(x[equal_index]-x[i]!=y[equal_index]-y[i])){
                count+=2;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}