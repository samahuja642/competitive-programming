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
    //not actual values they are copy if we use & value then it will take actual parameters 
    for(int value: v){
        value++;
    }
    for(auto value: v){
        cout<<value<<" ";
    }
    return 0;
}