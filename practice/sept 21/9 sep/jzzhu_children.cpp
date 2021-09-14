#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>>q;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        q.push(make_pair(i,temp));
    }
    while(q.size()==1){
        queue<pair<int,int>>::iterator it = q.front();
        it.second -= m;
        if(q.front().second<=0){
            q.pop();
        }
        else{
            int temp1 = q.front().first;
            int temp2 = q.front().second ;
            q.pop();
            q.push(make_pair(temp1,temp2-m));
        }
    }
    cout<<q.front().first<<endl;
    return 0;
}