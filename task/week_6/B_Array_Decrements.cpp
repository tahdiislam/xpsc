#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1, r = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i], r = max(r, a[i] - b[i]);
        for (int i = 0; i < n; i++)
            if ((a[i] - r < b[i] && b[i] != 0) || b[i] > a[i])
            {
                f = 0;
                break;
            }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
