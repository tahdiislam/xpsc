#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define fshort(i, n) for (int i = 0; i < (n); ++i)
int main()
{

    int t;
    cin >> t;

    fshort(_, t)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n + m);
        fshort(i, n + m) scanf("%lld", &a[i]);

        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());

        long long ans = 0;
        fshort(i, n) ans += a[i];

        cout << ans << endl;
    }

    return 0;
}