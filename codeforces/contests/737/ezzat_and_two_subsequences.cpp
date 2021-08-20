#include<iostream>
#include<climits>
#include<iomanip>
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
        double a[n];
        double maxi = INT_MIN; 
        double sum = 0 ;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(a[i],maxi);
            sum += a[i];
        }
        sum -= maxi;
        cout<<fixed<<setprecision(9)<<(maxi + (sum/double(n-1)))<<endl;
    }
    return 0;
}