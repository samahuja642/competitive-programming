// #include<iostream>
// #include<cmath>
// using namespace std;
// #define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
// typedef long long ll;
// #define mod (ll)(pow(10,9)+7);
// int main()
// {
//     fast;
//     int t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll count=0;
//         for(ll i=0;i<=pow(2,n)-1;i++){
//             if((i)^(i+1)==1){
//                 if(((i)^(i+1))==((i+2)^(i+3))){
//                     count++;
//                 }
//             }
//         }
//         cout<<count%mod;
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// #define mod (ll)(pow(10, 9) + 7)
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         ll count=1;
//         ll limit=((ull)(pow(2,(n))-1)%mod);
//         for(ll i=2;i<limit;i*=2){
//             if((i^1)==(i+1)){
//                 count=(count+1)%mod;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// typedef long long ll;
// #define MOD 1000000007
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define endl "\n";

// ll solve(ll x, ll y)
// {
//     ll result = 1;
//     while (y > 0)
//     {
//         if (y & 1)
//             result = (result * x) % MOD;

//         y /= 2;
//         x = (x * x) % MOD;
//     }
//     return result;
// }

// int main()
// {
//     fast;

//     ll t;
//     cin >> t;
//     while(t--){
//         ll n , ans;
//         cin >> n;
//         ans = solve(2,n-1);
//         cout << ans << endl;
//     }

//     return 0;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// #define mod 1000000007 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll result=((ull)(pow(2,n-1))%mod);
//         cout<<result<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
#define ll long long


ll powered(ll a, ll b) {
    const ll MOD = 10e9 + 7;
    a %=MOD;
    ll out = 1;
    while (b > 0) {
        if (b & 1)out = out * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return out;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        cout<<powered(2,n)<<endl;
    }

    return 0;
}