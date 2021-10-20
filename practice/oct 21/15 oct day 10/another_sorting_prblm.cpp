#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n,m;
	cin>>n>>m;
	string s[n];
	vector<pair<string,int>>v;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<m;j+=2){
			s[i][j] = 'Z' - s[i][j];
		}
	}
	for(int i=0;i<n;i++){
		v.push_back(make_pair(s[i],i+1));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<v[i].second<<" ";
	}
	cout<<endl;
	return 0;
}