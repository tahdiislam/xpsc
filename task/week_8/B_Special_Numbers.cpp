#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll p = 1;
        ll ans = 0;
        for (int i = 0; i < 31; i++)
        {
            if (k & (1 << i))
            {
                ans = (ans + p) % INF;
            }
            p *= n;
            p %= INF;
        }
        cout << ans << '\n';
    }
    return 0;
}