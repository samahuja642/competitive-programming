#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector can be made of anything not only datatype but also of template classes like pairs 
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);//O(1)
    }
    //vector of particular size and initialize with particular value
    vector<int>vect(16,2);//equivalent to array of 16 size and all initialized by value 2.
    v.pop_back();//O(1)
    vector<int>v2 = v;//O(n) it will make a new copy in v2.
    vector<int>&v3=v;//it will make v3 as nickname of v.
    vector<string>str;
    vector<pair<int,int>>r;
    pair<int,int>temp;
    r.push_back(temp);
    return 0;
}