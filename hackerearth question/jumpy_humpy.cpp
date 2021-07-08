#include<bits//stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int building[n];
    int maxi = INT_MIN;
    int total_stamina=0;
    for(int i=0;i<n;i++){
        cin>>building[i];
    }
    int curr;
    for(int i=0;i<n;i++){
        if(building[i]<building[i+1]){
            break;
        }
        else{
            total_stamina=(total_stamina^building[i]);
            curr=(building[i]^building[i+1]);
            maxi=max(curr,maxi);
        }
    }
    cout<<max(total_stamina,maxi)<<endl;
    return 0;
}