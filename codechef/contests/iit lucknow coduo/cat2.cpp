#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll division(ll num , ll n){
    if(num == 1) return 1;
    ll count = 0;
    for(ll i=1; i<=n; i++){
        if(num%i == 0) count++;
    }
    return count;
}

void check(ll *a , ll n){
    for(ll i=1; i<=n; i++){
        ll temp = division(i,n);
        a[i-1] += temp;
    }
}

ll CheckForOdd(ll a[] , ll n){
    ll count = 0;
    for(ll i=0; i<n; i++){
        if(a[i]%2 != 0) count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) a[i] = 2*i + 1;
        check(a,n);
        cout << CheckForOdd(a,n) << endl;
    }
    return 0;
}