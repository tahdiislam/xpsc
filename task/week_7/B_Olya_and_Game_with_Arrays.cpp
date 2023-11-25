
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t, n, m, a[50005], ans, mi, mii;
signed main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        mi = 1e9 + 1, mii = 1e9 + 1, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> m;
            for (int j = 1; j <= m; j++)
                cin >> a[j];
            sort(a + 1, a + m + 1);
            mi = min(mi, a[2]);
            mii = min(mii, a[1]);
            ans += a[2];
        }
        cout << ans + mii - mi << endl;
    }
    return 0;
}