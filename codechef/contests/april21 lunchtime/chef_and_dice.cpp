#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int result=0;
        if(n<=4){
            if(n==1){
                result+=20;
            }
            else if(n==2){
                result+=36;
            }
            else if(n==3){
                result+=51;
            }
            else if(n==4){
                result+=60;
            }
        }
        else{
            long int k=(n/4)-1;
            if(n%4==0){
                result=k*44+60;
            }
            else{
                if(n%4==1){
                    result=k*44;
                    result+=76;
                }
                else if(n%4==2){
                    result=k*44;
                    result+=88;
                }
                else if(n%4==3){
                    result=k*44;
                    result+=99;
                }
            }
            
        }
        cout<<result<<endl;
    }
    return 0;
}