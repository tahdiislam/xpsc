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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool ok = false;
        for (int i = 0, j = n - 1; i < n, j > 0; i++, j--)
        {
            if (i > j)
                break;
            else if (v[i] + v[i + 1] != v[j] + v[j - 1])
                ok = true;
            break;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}