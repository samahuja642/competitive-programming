#include<iostream>
using namespace std;
typedef int i;
typedef string st;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        i n;
        long long A,B;
        cin>>n;
        cin>>A>>B;
        st s;
        long long pointsa=0,pointsb=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s[0]=='E'||s[0]=='Q'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'||s[0]=='U')
            pointsa+=A;
            else pointsb+=B;
        }
        if(pointsa>pointsb){
            cout<<"SARTHAK"<<endl;
        }
        else if(pointsa<pointsb){
            cout<<"ANURADHA"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}