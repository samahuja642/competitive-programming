#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string number;
        cin>>number;
        string a,b,c,d;
        int num1,num2;
        if((number.length())%2==0){
            a=number.substr(0,((number.length())/2));
            b=number.substr(((number.length())/2),number.length());
            num1=stoi(a);
            num2=stoi(b);
            if(num1<num2){
                d=a;
                reverse(d.begin(),d.end());
                if(stoi(d)<stoi(b)){
                num1++;
                num2=num1;
                cout<<num1<<num2<<endl;
                }
                else if(stoi(d)>stoi(b)){
                    cout<<num1<<stoi(d);
                }
            }
            else if(num1>num2){
                num2=num1;
                cout<<num1<<num2<<endl;
            }
            else{
                num1++;
                cout<<num1;
                d=to_string(num1);
                reverse(d.begin(),d.end());
                cout<<d<<endl;
            }
        }
        else{
            a=number.substr(0,((number.length())/2));
            b=number.substr(((number.length())/2),number.length());
            c=number[(number.length()/2)];
            num1=stoi(a);
            num2=stoi(b);
            if(num1<num2){
                d=a;
                reverse(d.begin(),d.end());
                if(stoi(d)<stoi(b)){
                num1++;
                num2=num1;
                cout<<num1<<num2<<endl;
                }
                else if(stoi(d)>stoi(b)){
                    cout<<num1<<stoi(c)<<stoi(d);
                }
            }
            else if(num1>num2){
                num2=num1;
                cout<<num1<<stoi(c)<<num2<<endl;
            }
            else{
                int k=stoi(c);
                cout<<num1<<++k<<num2<<endl;
            }
        }
    }
    return 0;
}