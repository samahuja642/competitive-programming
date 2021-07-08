#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    bool prime=1;
    for(int i=2;i*i<=n;i++){
        if((n%i)==0){
            prime=0;
            return prime;
        }
    }
    return prime;
}
int nextprime(int n){
    int m=n+1;
    while(!(isprime(m))){
        m++;
    }
    return m;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,m;
    cin>>n>>m;
    if(isprime(n) && isprime(m) && nextprime(n)== m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}