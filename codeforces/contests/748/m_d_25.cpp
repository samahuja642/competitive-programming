#include <bits/stdc++.h>
using namespace std;
vector<long long> digits(long long n)
{
    vector<long long> v;
    while (n > 0)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        bool done = 0;
        vector<long long> v = digits(n);
        for (long long i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                for (long long j = i + 1; j < v.size(); j++)
                {
                    if (v[j] == 0 || v[j] == 5)
                    {
                        cout << j - 1 << endl;
                        done = 1;
                        goto label;
                    }
                }
            }
            else if (v[i] == 5)
            {
                int count = 0;
                int index0 = 0;
                for (long long j = i + 1; j < v.size(); j++)
                {
                    if (v[j] == 2 || v[j] == 7)
                    {
                        if(count<2){   
                            cout << j - 1 << endl;
                            done = 1;
                            goto label;
                        }
                        else{
                            cout<<index0 - 1<<endl;
                            done = 1;
                            goto label;
                        }
                    }
                    else if(v[j]==0){
                        count++;
                        index0 = j;
                    }
                }
                if (done == 0)
                {
                    for (long long k = i + 1; k < v.size(); k++)
                    {
                        if (v[k] == 0)
                        {
                            for (long long j = k + 1; j < v.size(); j++)
                            {
                                if (v[j] == 0 || v[j] == 5)
                                {
                                    cout << j - 1 << endl;
                                    done = 1;
                                    goto label;
                                }
                            }
                        }
                    }
                }
            }
        }
    label:
        continue;
    }
    return 0;
}