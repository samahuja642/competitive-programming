#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string transform(string s,string x){
	for(int i=0;i<s.length();i++){
		s[i]=x.find(s[i])+'a';
	}
	return s;
}
string normal_again(string s,string x){
	for(int i=0;i<s.length();i++){
		s[i]=x[s[i]-'a'];
	}
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	string x;
	cin>>x;
	int n;
	cin>>n;
	vector<string>s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		s[i]=transform(s[i],x);
	}
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++){
		s[i]=normal_again(s[i],x);
	}
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}