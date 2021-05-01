#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
	if((n&1)==1){
	    for(int i=0;i<n;i++){
	        if((i&1)==0)
	        sum+=(a[i]*a[i]);
	        else
	        sum-=(a[i]*a[i]);
	    }
	}
	else{
	    for(int i=0;i<n;i++){
	        if((i&1)==0)
	        sum-=(a[i]*a[i]);
	        else
	        sum+=(a[i]*a[i]);
	    }
	}
	cout<<sum<<endl;
	sum=0;
    }
	return 0;
}