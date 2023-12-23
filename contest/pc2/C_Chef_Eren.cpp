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
        int n, a, b;
        cin >> n >> a >> b;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (i % 2 == 0)
                cnt += a;
            else
                cnt += b;
        cout << cnt << "\n";
    }
    return 0;
}