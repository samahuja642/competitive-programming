#include <bits/stdc++.h>
using namespace std;
#define int  long long int
#define nline "\n"
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define deb(a) cerr<<#a<<" "<<a<<nline
#define all(a) a.begin(),a.end()
#define ctoi(c) (int)((int)c-'0')
#define debv(v) cerr<<#v<<" => [ "; for(auto &vv:v){cerr<<vv<<" ";}cerr<<"]"<<nline
#define deba(a,k,n) cerr<<#a<<" => [ "; for(int i=k;i<n;i++){cerr<<a[i]<<" ";}cerr<<"]"<<nline
#define loop(i,s,e) for(int i=s;i<e;i++)
#define itoc(i) (char)(i+'0')
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Solution {
private:
public:
 
void solve(){
   
   int n;
   cin>>n;

   int a[n];
   stack<int> even,odd;
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
       if(a[i]%2){
        odd.push(a[i]);
       }else{
        even.push(a[i]);
       }
  }
  
  int sum=0;

  vector<int> v;

  while(!odd.empty()){
    
        v.push_back(odd.top());
        odd.pop();
  }
  while(!even.empty()){
        v.push_back(even.top());
        even.pop();
  }
  for(int i=0;i<v.size()-1;i++){
      sum+=abs(v[i+1]-v[i]); 
  } 
  if(sum%2){
    for(auto &a:v){
        cout<<a<<" ";
    }
    cout<<nline;
  }else{
    cout<<-1<<nline;
  }

}

};

int32_t main()
{
  auto begin = std::chrono::high_resolution_clock::now();
  FAST; Solution sol;
  // #ifndef ONLINE_JUDGE
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w", stdout);
  // #endif
  int t;
  t = 1; 
  cin >> t;
  while (t--)
    sol.solve();

  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
  cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

  return 0;
}