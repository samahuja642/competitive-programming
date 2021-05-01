// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
		int count=0;
		sort(arr.begin(),arr.end());
		int j=1;
        for(int i=0;i<N;i++){
			if(arr[i]==arr[i+1]&&arr[i]==j){
				while(arr[i]==arr[i+1]){
					count++;
					i++;
				}
				goto label;
			}
			else if(arr[i]!=j){count=0;}
			else{count=1;}
			label:
			cout<<count<<" ";
			count=1;
			j++;
		}
		cout<<endl;
    }
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}