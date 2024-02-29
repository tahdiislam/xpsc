#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> freq(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            if (v[i] > n)
                continue;
            freq[v[i]]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int here = 0;
            for (int x = 1; x * x <= i; x++)
            {
                if (i % x == 0)
                {
                    here += freq[x];
                    if (x * x != i)
                        here += freq[i / x];
                }
            }
            ans = max(here, ans);
        }
        cout << ans << endl;
    }
    return 0;
}