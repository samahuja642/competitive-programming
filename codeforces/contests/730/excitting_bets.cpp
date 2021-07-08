#include<iostream>
using namespace std;
long long gcd(long long  a,long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0 0"<<endl;
        }
        else{
            long long max;
            long long max_operation;
            long long min_operation=0;
            if(a>b){
                max=gcd(a-b,0);
                max_operation=b;
                long long tempa=a,tempb=b;
                while(max!=gcd(tempa,tempb)&&min_operation<max_operation){
                    min_operation++;
                    tempa++;
                    tempb++;
                }
                if(min_operation==max_operation){
                    min_operation=0;
                    tempa=a;tempb=b;
                    while(max!=gcd(tempa,tempb)&&min_operation<max_operation){
                    min_operation++;
                    tempa--;
                    tempb--;
                    }
                }
                cout<<max<<" "<<min_operation<<endl;
            }
            else{
                max=gcd(0,b-a);
                max_operation=a;
                long long tempa=a,tempb=b;
                while(max!=gcd(tempa,tempb)&&min_operation<max_operation){
                    min_operation++;
                    tempa++;
                    tempb++;
                }
                if(min_operation==max_operation){
                    min_operation=0;
                    tempa=a;tempb=b;
                    while(max!=gcd(tempa,tempb)&&min_operation<max_operation){
                    min_operation++;
                    tempa--;
                    tempb--;
                    }
                }
                cout<<max<<" "<<min_operation<<endl;
            }
        }
    }
    return 0;
}