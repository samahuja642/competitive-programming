// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int  sum=0;
        int *ptr;
        int i=0;
       while(N!=0){
        sum+=(N%10);
        N=(N/10);
        }
        while(sum!=0){
        *(ptr+i)=sum%10;
        i++;
        sum=(sum/10);
        }
        int flag=1;
        for(int j=0;j<(sum/2);j++){
            if(ptr[j]==ptr[i-j]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        return flag;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends