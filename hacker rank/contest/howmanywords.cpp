#include <bits/stdc++.h>

using namespace std;

int howMany(string sentence) {
    int count=0;
    int temp=0;
    while(string sentence){
        if(string sentence==' ' || string sentence='.' || string sentence==',' || string sentence=='?' || string sentence=='!'){
            temp=0;
        }
        else if(temp==0){
            temp=1;
            count++;
        }
        ++string sentence;
    }
    return count;
}

int main(){
    char string sentence[];
    cin>>string sentence[]>>endl;
    cout<<"no. of words in strin are"<<howMany(string sentence);
    return 0;
}