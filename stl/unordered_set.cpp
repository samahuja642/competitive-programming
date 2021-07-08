#include<iostream>
#include<unordered_set>
using namespace std;
void print(unordered_set<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
}
int main(){
    unordered_set<string>s;
    s.insert("abc");
    s.insert("zsdfj");
    s.insert("abc");
    auto it= s.find("abc");
    // s.erase("zsdfj");// it can take value or iterator both 
    print(s);
    return 0;
}