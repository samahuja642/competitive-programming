#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        char s[100000];
        cin>>s;
        char test[5];
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='p'){
                for(int j=0;j<5;j++){
                    test[j]=s[i+j];
                }
                if(strcmp(test,"party")){
                    strcpy(test,"pawri");
                }
                for(int j=0;j<5;j++){
                    s[i+j]=test[j];
                }
                
            }
        }
    cout<<s;
    }
    
    return 0;
}