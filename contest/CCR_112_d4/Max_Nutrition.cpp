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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v2[i];
        }
        vector<int> v3(101);
        for (int i = 1; i <= n; i++)
        {
            v3[v[i]] = max(v3[v[i]], v2[i]);
        }
        int sm = 0;
        for (int i = 0; i <= n; i++)
        {
            sm += v3[i];
        }
        cout << sm << endl;
    }
    return 0;
}
