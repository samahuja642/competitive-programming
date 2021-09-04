#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int sum=0;
    int w[n];
    int one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        sum+=w[i];
        if(w[i]== 100){
            one++;
        }
        else{
            two++;
        }
    }
    sum = sum / 2;
    if(sum%100==0){
        if(one%2==0 && two%2==1){
            if(one==0)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
            }
        }
        else if(one%2==1 && two%2==1){
            cout<<"NO"<<endl;
        }
        else if(two%2==0){
            cout<<"YES"<<endl;
        }
    }
    else cout<<"NO"<<endl;
    return 0;
}