#include<iostream>
#include<climits>
using namespace std;
int floor_search(int arr[],int value,int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int index=n;
    arr[n]=INT_MIN;
    while(start<=end){
        if(arr[mid]==value)return mid;
        if(arr[mid]<value){
            if(arr[mid]>arr[index]){
                index = mid ;
            }
            start = mid + 1;
        }
        if(arr[mid]>value)end = mid -1;
        mid = start + (end - start)/2;
    }
    return index;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int squares[1001];
    for(int i=1;i<=1000;i++){
        squares[i]= i*i ;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        cin>>a;
        if(n>=4){
            int find = floor_search(squares,n,1001);
            cout<< a*find << endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}