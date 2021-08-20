#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>k_count;
    int count[m+1]={0};
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(j==0)
            count[a[i][j]]++;
            if(a[i][j]==k){
                k_count.push_back(j);
            }
        }
    }
    int maxi = INT_MIN; 
    int maxi_index;
    for(int i=1;i<=m;i++){
        if(maxi<count[i]){
            maxi = count[i];
            maxi_index = i ;
        }
    }
    sort(k_count.begin(),k_count.end());
    cout<<maxi_index<<endl;
    cout<<k_count.at(k_count.size()/2);
    return 0;
}