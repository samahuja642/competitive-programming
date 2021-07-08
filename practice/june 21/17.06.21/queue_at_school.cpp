// link to the problem: "https://codeforces.com/problemset/problem/266/B"
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,t;
    cin>>n;
    cin>>t;
    string queue;
    cin>>queue;
    int time=0;
    while(time<t){
        for(int i=0;i<(queue.length()-1);i++){
            if(queue[i]=='B'&& queue[i+1]=='G'){
                swap(queue[i],queue[i+1]);
                i++;
            }
        }
        time++;
    }
    cout<<queue<<endl;
    return 0;
}