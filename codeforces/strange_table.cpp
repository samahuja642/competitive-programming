#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++){
    int n,m,x;
    cin>>n>>m>>x;
    int check,result=0,z=0;
    for(int i=1;i<=m;i++){
        check=n*i;
        z++;
        if(check>=x){
            check-=(x+1);
            result=(m*(check-1))+z;
            cout<<result<<endl;
            break;
        }
        else{
            continue;
        }

    }
    }
    return 0;
}