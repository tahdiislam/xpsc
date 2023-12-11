#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, h;
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        int a[n];
        for (i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        cout << (h / (a[n - 1] + a[n - 2]) * 2) + (h % (a[n - 1] + a[n - 2]) > 0) + (h % (a[n - 1] + a[n - 2]) > a[n - 1]) << '\n';
    }
}