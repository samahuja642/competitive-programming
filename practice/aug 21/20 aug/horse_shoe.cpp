#include<iostream>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    set<int>s;
    for(int i =0;i<4;i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    cout<<(4-s.size())<<endl;
    return 0;
}