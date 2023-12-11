#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sz = 1;
        bool die = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i > 0)
            {
                if (a == 0)
                {
                    if (v[i - 1])
                        v[i] = a;
                    else
                    {
                        die = true;
                    }
                }
                else
                {
                    if (v[i - 1])
                        v[i] = a, sz += 5;
                    else
                        v[i] = a, sz++;
                }
            }
            else if (i < 1 && a < 1)
                v[i] = a;
            else if (i < 1 && a > 0)
                v[i] = a, sz++;
        }
        if (die)
            cout << -1 << endl;
        else
            cout << sz << endl;
    }
    return 0;
}