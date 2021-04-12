#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int retvalue(char s){
        int value;
        if(s=='I'){
                value=1;
            }
            else if(s=='V'){
                value=5;
            }
            else if(s=='X'){
                value=10;
            }
            else if(s=='L'){
                value=50;
            }
            else if(s=='C'){
                value=100;
            }
            else if(s=='D'){
                value=500;
            }
            else if(s=='M'){
                value=1000;
            }
        return value;
    }
    int romanToInt(string s) {
        int integer=0,a,b;
        for(int i=0;i<s.length();i++){
            a=retvalue(s[i]);
            if(i=s.length()-1){
                integer+=a;
                continue;
            }
            b=retvalue(s[i+1]);
            if(a<b){
                integer+=(b-a);
            }
            else{
                integer+=b;
            }
        }
        return integer;
    }
};
int main()
{
    Solution ob;
    cout<<ob.romanToInt("XV");
    return 0;
}