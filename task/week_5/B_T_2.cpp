#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        long long a;
        cin >> a;
        auto low = lower_bound(v.begin(), v.end(), a);
        auto upper = upper_bound(v.begin(), v.end(), a);
        int l = low - v.begin();
        int u = upper - v.begin();
        if (l != 0 && l == u)
        {
            if (u == n)
                cout << v[l - 1] << " "
                     << "X" << endl;
            else if (u == n - 1)
                cout << v[l - 1] << " " << v[u] << endl;
        }
        else if (u == 1 || u == 0)
            cout << "X"
                 << " " << v[u] << endl;
        else
            cout << v[l - 1] << " " << v[u] << endl;
    }

    return 0;
}