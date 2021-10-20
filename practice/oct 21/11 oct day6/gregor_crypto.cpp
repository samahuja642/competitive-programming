#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<" "<<n-1<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     int t;
//     cin>>t;
//     while(t--){
//         unordered_map<int,int>m;
//         int n;
//         cin>>n;
//         for(int i=2;i<=min(9,n);i++){
//             m[i]=(n%i);
//         }
//         for(auto it=m.begin();it!=m.end();it++){
//             for(auto it2=m.begin();it2!=m.end();it2++){
//                 if(it!=it2){
//                     if(it->second==it2->second){
//                         int a = it->first;
//                         int b = it2->first;
//                         cout<<min(a,b)<<" "<<max(a,b)<<endl;
//                         goto label;
//                     }
//                 }
//             }
//         }
//         label:
//         continue;
//     }
//     return 0;
// }