#include<iostream>
using namespace std;
typedef int integer;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        integer D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;
        int count=0;
        if((d*D)>=42){
            count=count+c;
        }
        else if((d*D)>=21){
            count=count+b;
        }
        else if((d*D)>=10){
            count=count+a;
        }
        cout<<count<<endl;
    }
    return 0;
}