#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
// long long floor_search(long long arr[],long long value,long long n){
//     long long start = 0;
//     long long end = n-1;
//     long long mid = start + (end - start)/2;
//     long long index=n;
//     arr[n]=INT_MIN;
//     while(start<=end){
//         if(arr[mid]==value)return mid;
//         if(arr[mid]<value){
//             if(arr[mid]>arr[index]){
//                 index = mid ;
//             }
//             start = mid + 1;
//         }
//         if(arr[mid]>value)end = mid -1;
//         mid = start + (end - start)/2;
//     }
//     return index;
// }
long long ceilSearch(long long arr[], long long low, long long high, long long x)
{
    long long mid;    
     
    /* If x is smaller than
       or equal to the first element,
       then return the first element */
    if(x <= arr[low])
        return low;
     
    /* If x is greater than the last element,
       then return -1 */
    if(x > arr[high])
        return -1;
     
    /* get the index of middle element of arr[low..high]*/
    mid = (low + high) / 2; /* low + (high - low)/2 */
     
    /* If x is same as middle element,
       then return mid */
    if(arr[mid] == x)
        return mid;
         
    /* If x is greater than arr[mid],
       then either arr[mid + 1] is ceiling of x
       or ceiling lies in arr[mid+1...high] */
    else if(arr[mid] < x)
    {
        if(mid + 1 <= high && x <= arr[mid + 1])
            return mid + 1;
        else
            return ceilSearch(arr, mid + 1, high, x);
    }
     
    /* If x is smaller than arr[mid],
       then either arr[mid] is ceiling of x
       or ceiling lies in arr[low...mid-1] */
    else
    {
        if(mid - 1 >= low && x > arr[mid - 1])
            return mid;
        else
            return ceilSearch(arr, low, mid - 1, x);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long squares[32000];
    for(long long i=0;i<=32000;i++){
        squares[i]= i*i ;
    }
    long long t;
    cin>>t;
    while(t--){
        long long k;
        cin>>k;
        long long index = ceilSearch(squares,0,31999,k);
        if(k>ceil((squares[index]-squares[index-1])/2)){
            cout<<k-squares[index-1]-ceil((squares[index]-squares[index-1])/2)<<" "<<index-ceil((squares[index]-squares[index-1])/2)<<endl;
        }
        cout<<k-squares[index-1]<<" "<<index<<endl;
    }
    return 0;
}