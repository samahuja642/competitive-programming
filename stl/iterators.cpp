#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int>::iterator it =v.begin();//iterator same datatype ka hi banta hai
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}