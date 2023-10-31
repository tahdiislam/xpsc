#include <bits/stdc++.h>
using namespace std;

vector<int> sum(105);

int main()
{
    sum[1] = 1;
    for (int i = 1; i < sum.size(); i++)
    {
        sum[i] = sum[i - 1] + i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> v(m);
        int mx = INT_MIN;
        int sm = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            mx = max(v[i], mx);
            sm += v[i];
        }
        // cout << mx << " " << sm << endl;
        bool ok = false;
        for (int i = mx; i < sum.size(); i++)
        {
            if (sm + s == sum[i])
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// 0 1 3 6 10 15 21 28 36 45 55 66 78 91 105 120 136 153 171 190 210 231 253 276 300 325 351 378 406 435 465 496 528 561 595 630 666 703 741 780 820 861 903 946 990 1035 1081 1128 1176 1225 1275 1326 1378 1431 1485