#include<iostream>
using namespace std;
int* divisible(int i,int n,&k){
    int *ptr;
    int k=-1;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            k++;
            ptr[k]=j;
        }
    }
    return ptr;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n]={1};
        int k,*ptr;
        for(int i=0;i<n;i++){
            ptr=divisible((i+1),n,k);
            int m=0;
            while(m<k){
            if(a[*(ptr+m)])

            }
        }
    }
    return 0;
}