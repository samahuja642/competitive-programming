#include<iostream>
#include<set>
using namespace std;
void print(multiset<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string>s;
    s.insert("abc");
    s.insert("zsdfj");
    s.insert("abc");
    auto it= s.find("abc");
    s.erase("abc");// it can take value or iterator both 
    // it will delete all elements with value abc
    print(s);
    return 0;
}