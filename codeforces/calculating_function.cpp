#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int output=0;
    for(int i=1;i<=n;i++){
        if(i&1==1){
            output+=(-i);
        }
        else{
            output+=i;
        }
    }
    cout<<output<<endl;
    return 0;
}