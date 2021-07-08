#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string num1,num2;
    cin>>num1;
    cin>>num2;
    string answer;
    for(int i=0;i<num1.length();i++){
        if(num1[i]==num2[i]){
            answer+='0';
        }
        else{
            answer+='1';
        }
    }
    cout<<answer<<endl;
    return 0;
}