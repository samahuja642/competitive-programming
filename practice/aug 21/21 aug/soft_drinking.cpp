#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    if((k*l)/n>=nl && (c*d)>=1 && (p/n)>=np){
        int mini = min((k*l/nl)/n,(c*d/n));
        mini = min(mini,(p/np)/n);
        cout<<mini<<endl;
    }
    else cout<<0;
    return 0;
}