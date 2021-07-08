#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int person1=0,person2=0;
    vector<string> a(3);
    for(int i=0;i<3;i++){
            cin>>a[i];
    }
    for(int i=0;i<3;i++){
        if( (a[i][i]==a[i][i+1] && a[i][i+1]==a[i][i+2] && a[i][i]=='X')||(a[i][i]==a[i+1][i] && a[i+1][i]==a[i+2][i] && a[i][i]=='X')||((i==2||i==0)&&(a[i][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='X'))){
            person1++;
        }
        else if( (a[i][i]==a[i][i+1] && a[i][i+1]==a[i][i+2] && a[i][i]=='O')||(a[i][i]==a[i+1][i] && a[i+1][i]==a[i+2][i] && a[i][i]=='O')||((i==2||i==0)&&(a[i][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='O'))){
            person2++;
        }
    }
    if(person2!=person1){
        cout<<"3"<<endl;
    }
    return 0;
}