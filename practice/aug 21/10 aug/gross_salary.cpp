#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int salary ;
        cin>>salary;
        double gross = salary;
        if(salary < 1500){
            gross = 2 * salary;
        }
        else{
            gross +=500;
            gross += 0.98 * salary;
        }
        cout<<fixed<<setprecision(2)<<gross<<endl;
    }
    return 0;
}