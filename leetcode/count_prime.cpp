#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        int flag=0;
        for(int i=2;i<n;i++){
            for(int j=2;j<=sqrt(i);j++){
                if((i%j)==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
            flag=0;
        }
        return count;
    }
};
int main()
{
    Solution ob;
    cout<<ob.countPrimes(10);
    return 0;
}