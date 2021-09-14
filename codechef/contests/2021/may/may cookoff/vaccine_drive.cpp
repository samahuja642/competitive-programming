// #include<iostream>
// using namespace std;
// typedef int integer;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     int t;
//     cin>>t;
//     while(t--){
//         int g,p;
//         cin>>g>>p;
//         int x[10];
//         for(int i=0;i<10;i++){
//             cin>>x[i];
//         }
//         int sum=0;
//         for(int i=g;i<10;i++){
//             sum+=x[i];
//         }
//         if(sum%p==0){
//             if((x[g-1]%p)==0)
//             cout<<(sum/p)+1<<" "<<(sum/p)+(x[g-1]/p)<<endl;
//             else
//             cout<<(sum/p)+1<<" "<<(sum/p)+(x[g-1]/p)+1<<endl;
//         }
//         else{
//             if(((x[g-1]-(sum%p))%p)==0)
//             cout<<(sum/p)+1<<" "<<(sum/p)+ ((x[g-1]-(sum%p))/p) + 1<<endl;
//             else
//             cout<<(sum/p)+1<<" "<<(sum/p)+((x[g-1]-(sum%p))/p)+((x[g-1]-(sum%p))%p)+1<<endl;
//         }
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// # define pb push_back
// #define pii pair<int, int>
// #define mp make_pair
// # define ll long long int

// using namespace std;

// const int maxt = 1e4, maxp = 1e5, minpp = 1, maxpp = 1e5;
// const string newln = "\n", space = " ";

// int main()
// {
//     int t; cin >> t;
//     int g, p;
//     int a[11];
//     while(t--){
//         cin >> g >> p;
//         for(int i = 1; i <= 10; i++){
//             cin >> a[i];
//         }
//         int days = 0;
//         for(int j = 10; j > g; j--){
//             days += a[j] / p; a[j - 1] += a[j] % p;
//         }
//         int minans = days + 1, maxans = days + (a[g] + p - 1) / p;
//         cout << minans << " " << maxans << endl;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--)
    {
        int g, p;
        cin >> g >> p;
        int x[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> x[i];
        }
        int sum = 0;
        for (int i = g; i < 10; i++)
        {
            sum += x[i];
        }
        
        return 0;
    }