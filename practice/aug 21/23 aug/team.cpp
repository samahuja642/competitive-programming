#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int total = 0 ;
    for(int i=0;i<n;i++){
        int a[3];
        int one = 0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                one++;
            }
        }
        if(one >=2){
            total++;
        }
    }
    cout<<total<<endl;
    return 0;
}