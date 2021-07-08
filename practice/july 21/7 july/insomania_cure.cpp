// https://codeforces.com/problemset/problem/148/A
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int result=0;
    if(k==1||l==1||m==1||n==1){
        result=d;
    }
    else{
        int x=(d/l)-(d/lcm(k,l));
        if(x<0){
            x=0;
        }
        int y=(d/m)-(d/lcm(k,m))-(d/lcm(m,l));
        if(y<0){
            y=0;
        }
        int z=(d/n)-(d/lcm(n,k))-(d/lcm(n,l))-(d/lcm(n,m));
        result=((d/k)+x+y+z);
    }
    cout<<result<<endl;
    return 0;
}