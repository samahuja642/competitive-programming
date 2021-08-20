#include<bits//stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        int maxi = INT_MIN, mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max (maxi , a[i]);
            mini = min (mini , a[i]);
        }
        a[n] = INT_MIN;
        int num_k = 0;
        for (int i = 0; i < n; i++) {
            while (a[i] <= a[i + 1] && !(a[i] == maxi && a[i + 1] == mini || a[i] == mini && a[i + 1] == maxi)) {
                i++;
            }
            num_k++;
        }
        if (num_k <= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}