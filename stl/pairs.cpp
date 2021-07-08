#include<iostream>
using namespace std;
int main(){
    //pair is not like array.
    pair<int,string>p;
    p=make_pair(2,"abc");
    p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>&p1= p ;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}