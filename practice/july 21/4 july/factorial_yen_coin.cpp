#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int coins[10];
    coins[0]=1;coins[1]=2;coins[2]=6;coins[3]=24;coins[4]=120;coins[5]=720;coins[6]=7*coins[5];coins[7]=8*coins[6];coins[8]=9*coins[7];coins[9]=10*coins[8];
    int p;
    cin>>p;
    int count=0;
    while(p){
        for(int i=9;i>=0;i--){
            if(coins[i]<=p){
                p-=coins[i];
                goto label;
            }
        }
        label:
        count++;
    }
    cout<<count<<endl;
    return 0;
}