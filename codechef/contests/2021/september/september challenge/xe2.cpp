#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin >> t;
    while (t--) {
        unordered_map<long long, long long>m;
        long long n, x;
        cin >> n >> x;
        long long a[n], rox[n];
        //input and calculating how many times one thing is occurring and storing it in map and also calculating xor and storing it in rox array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            rox[i] = x ^ a[i];
            m[a[i]]++;
        }
        //calculating which one is occuring maximum times
        unordered_map<long long, long long>::iterator max_it;
        long long temp = INT_MIN;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (temp < it->second) {
                temp = it->second;
                max_it = it;
            }
        }
        //checking for multiple maximum values and pushing iterator into vector
        vector<unordered_map<long long,long long>::iterator>v;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (max_it->second == it->second) {
                v.push_back(it);
            }
        }
        //printing 
        long long maxi = max_it->second;
        long long max_count = INT_MIN;
        for (long long i = 0; i < v.size(); i++) {
                long long count = 0;
                for (long long j = 0; j < n; j++) {
                    if (rox[j] == v[i]->first && a[j] != v[i]->first)
                    {
                        count++;
                    }
                }
                if(max_count<count){
                    max_count=count;
                }
        }
        cout << maxi +  max_count << " " << max_count << endl;
    }
    return 0;
}