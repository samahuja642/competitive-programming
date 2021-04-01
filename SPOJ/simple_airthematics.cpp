#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string a;
        int num[2],j=0,result;
        for(int i=0;i<str.length();i++){
            if(isdigit(str[i])==0){
                a=str.substr(0,(i));
                num[j]=stoi(a);
                j++;
                a=str.substr(i+1,(str.length()-i));
                num[j]=stoi(a);
                if(str[i]=='*'){
                    result=num[0]*num[1];
                }
                else if(str[i]=='-'){
                    result=num[0]-num[1];
                }
                else if(str[i]=='+'){
                    result=num[0]+num[1];
                }
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}