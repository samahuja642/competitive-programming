#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int even_bits=n & 0xAAAAAAA;
    int odd_bits= n  &  0x5555555;
    even_bits=even_bits>>1;
    odd_bits=odd_bits<<1;
    cout<<(odd_bits|even_bits);
    return 0;
}