#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool issorted(int arr[],int asc[],int start,int n){
    for(int i=start;i<n;i++){
        if(arr[i]!=asc[i])return 0;
    }
    return 1;
}
void left_shift(int arr[],int l,int r){
    int temp = arr[l];
    for(int i=r;i>l;i--){
        arr[i]=arr[i-1];
    }
    arr[r]=temp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],asc[n],desc[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            asc[i]=a[i];
            desc[i]=a[i];
        }
        sort(asc,asc+n);
        sort(desc,desc+n,greater<int>());
        if(issorted(a,asc,0,n)){
            cout<<0<<endl;
        }
        else{
            int j=0;
            vector<pair<pair<int,int>,int>>v;
            while(!issorted(a,asc,j,n)){
                int present;
                for(int i=j;i<n;i++){
                    if(a[i]==asc[j]){
                        present = i;
                        break;
                    }
                }
                int d = present - j;
                if(d>0){
                    v.push_back(make_pair(make_pair(j,present),d));
                    while(d--){
                        left_shift(a,j,present);
                    }
                }
                j++;
            }
            cout<<v.size()<<endl;
            for(auto it:v){
                auto values = it.first;
                cout<<values.first+1<<" "<<values.second+1<<" "<<it.second<<endl;
            }
        }
    }
    return 0;
}