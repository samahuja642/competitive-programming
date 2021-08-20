#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    int ld[n],rd[n];
    int n0l=0,n1l=0,n0r=0,n1r=0;
    for(int i=0;i<n;i++){
        cin>>ld[i]>>rd[i];
        if(ld[i]==0){
            n0l++;
        }
        else{
            n1l++;
        }
        if(rd[i]==0)n0r++;
        else n1r++;
    }
    int result=0;
    if(n0l<=n1l){
        result += n0l;
    }
    else{
        result += n1l;
    }
    if(n0r<=n1r){
        result += n0r;
    }
    else{
        result += n1r;
    }
    cout<<result<<endl;
    return 0;
}