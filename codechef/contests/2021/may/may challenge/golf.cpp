// #include<iostream>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,x,k;
//         cin>>n>>x>>k;
//         ll current=0;
//         ll flag=1;
//         while(flag!=n+1){
//             if(current+k<=(n+1)){
//                 current+=k;
//                 if(current==x){
//                     cout<<"yes"<<endl;
//                     goto label;
//                 }
//             }
//             else{
//                 current=n+1;
//             }
//             flag=current;
//         }
//         while(flag!=0){
//             if(current-k>=0){
//                 current-=k;
//                 if(current==x){
//                     cout<<"yes"<<endl;
//                     goto label;
//                 }
//             }
//             else{
//                 current=0;
//             }
//             flag=current;
//         }
//         cout<<"no"<<endl;
//         label:
//         continue;
//     }
//     return 0;
// }


// better approach
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
        int n, x, k;
        cin >> n >> x >> k;
        if (((n + 1 - x) % k) == 0 || x % k == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}