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
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end(), greater<int>());
        int a = v[0] + v2[0];
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] + v2[i] != a)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << -1 << "\n";
        else
        {
            for (int a : v)
                cout << a << " ";
            cout << "\n";
            for (int a : v2)
                cout << a << " ";
            cout << "\n";
        }
    }

    return 0;
}