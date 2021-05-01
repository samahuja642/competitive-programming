#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    // while(n!=0){
    //     sum+=(n%10);
    //     n=(n/10);
    // }
    for (sum = 0; n > 0; sum += n % 10, n /= 10);//this can also be used
    // can also be done using ascii just -48 from them
    cout<<sum;
    return 0;
}