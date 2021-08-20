#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    int count=0,currval=1;
    int arr[1001];
    while(count!=1000){
        if(currval%3!=0&&currval%10!=3){
            count++;
            arr[count]=currval;
        }
            currval++;
    }
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k]<<endl;
    }
    return 0;
}