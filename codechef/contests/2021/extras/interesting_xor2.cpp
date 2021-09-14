#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
 
int main(){
    long long int t, c;
    cin >> t;
    for(long long int i = 0; i < t; i++){
        cin >> c;
        long long int d = floor(log(c)/log(2));
        long long int n = pow(2,d)-1;
        cout << n*(n^c) << "\n";
    }
return 0;
}