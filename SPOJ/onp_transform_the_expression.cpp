#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++){
        string a;
        cin>>a;
        string output;
        for(int i=0;i<a.length();i++)
        if(isalpha(a[i])!=0){
            output.insert(0,a[i]);

        }
    }
    return 0;
}