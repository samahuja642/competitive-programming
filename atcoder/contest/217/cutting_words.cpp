#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long l,q;
    cin>>l>>q;
    set<long long>s;
    s.insert(0);
    s.insert(l);
    while(q--){
        long long c,x;
        cin>>c>>x;
        if(c==1){
            s.insert(x);
        }
        else if(c==2){
                auto it = s.lower_bound(x);
                long long high = *it;
                long long low = *(--it);
                cout<<high - low<<endl;
        } 
    }
    return 0;
}