#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
        }
        else {
            double power = (float)log(n) / (float)log(2);
            if (power!=int(power)) {
                power = (int)power;
                cout << n + 1 - pow(2, power) << endl;
            }
            else {
                n--;
                power = (float)log(n) / (float)log(2);
                power = (int)power;
                cout << n +1 - pow(2, power) << endl;
            }
        }
    }
    return 0;
}