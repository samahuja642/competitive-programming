#include<stack>
#include<iostream>
#include<queue>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(8);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(45);
    cout<<s.top()<<" is poped out."<<endl;
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    queue<int>q;
    q.push(7);
    q.push(8);
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(46);
    q.push(78);
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}