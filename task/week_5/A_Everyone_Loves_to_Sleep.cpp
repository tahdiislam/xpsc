#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int t = h * 60 + m;
        int ans = 2880;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            int p = a * 60 + b;
            if (p < t)
                p += 24 * 60;
            ans = min(ans, p - t);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}