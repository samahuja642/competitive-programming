#include<iostream>
#include<climits>
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
        int a[n+1];
        int min_index,max_index,mini=INT_MAX,maxi=INT_MIN;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
            if(a[i]<mini){
                mini =a[i];
                min_index=i;
            }
            if(a[i]>maxi){
                maxi =a[i];
                max_index=i;
            }
        }
        if((min_index <=n/2) && (max_index<=n/2)){
            cout<<max(min_index,max_index)<<endl;
        }
        else if((min_index > n/2) && (max_index > n/2)){
            cout<<(n+1-min(min_index,max_index))<<endl;
        }
        else if((min_index > n/2) && (max_index<=n/2)){
            if(min_index-max_index<(n+1-min_index))
            {
                if(max_index>n+1-min_index){
                    cout<<(n+1-min_index+min_index-max_index)<<endl;
                }
                else{
                    cout<<(max_index+min_index-max_index)<<endl;
                }
            }
            else
            cout<<(max_index+n+1-min_index)<<endl;
        }
        else if((min_index <=n/2) && (max_index > n/2)){
            if(max_index-min_index<(n+1-max_index))
            {
                if(max_index>n+1-min_index){
                    cout<<(n+1-max_index+max_index-min_index)<<endl;
                }
                else{
                    cout<<(min_index+max_index-min_index)<<endl;
                }
            }
            else
            cout<<(min_index+n+1-max_index)<<endl;
        }
    }
    return 0;
}