// link https://cses.fi/problemset/task/1621

// code1
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     unordered_set<int>s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int temp;
//         cin>>temp;
//         s.insert(temp);
//     }
//     cout<<s.size()<<endl;
//     return 0;
// }

// code2
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count = 0;
    for(int i=0;i<n;i++){
        while(a[i+1]==a[i] && i!=n-1){
            i++;
            cout<<i<<endl;
        }
        i--;
        count++;
    }
    cout<<count<<endl;
    return 0;
}