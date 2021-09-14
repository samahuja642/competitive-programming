#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int f[n], c[m];
        int lara=-1,larb=-1;
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
            if(f[i]>lara){
                lara=f[i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c[m];
            if(f[i]>larb){
                larb=f[i];
            }
        }
        int a;
        if(lara>larb){
            a=lara;
        }
        else {
            a=larb;
        }
        int g=0, h=0;
        int previous = 0, change = 0;
        for (int p = 1;p<=a; p++)
        {
            if (p == f[g] && f[g] != c[h])
            {
                if (previous == 1)
                {
                    change++;
                    previous=0;
                }
                g++;
            }
            else if (p == c[h] && f[g] != c[h])
            {
                if (previous == 0)
                {
                    change++;
                    previous=1;
                }
                h++;
            }
            else if (f[g] == c[h] &&p == f[g])
            {
                if (previous == 0)
                {
                    change++;
                    previous=1;
                    h++;
                }
                else if (previous == 1)
                {
                    change++;
                    previous=0;
                    g++;
                }
            }
        }
        cout << change << endl;
    }
    return 0;
}