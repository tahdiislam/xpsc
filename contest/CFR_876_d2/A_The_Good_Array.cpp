#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    int ans = 0;

    if (k == 1)
    {
        ans = n;
    }

    ans = (n - 1 + k - 1) / k + 1;

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}
