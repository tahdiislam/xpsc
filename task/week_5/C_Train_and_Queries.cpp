#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<long long, pair<int, int>> mp;
        for (int i = 1; i <= n; i++)
        {
            long long a;
            cin >> a;
            if (!mp.count(a))
            {
                mp[a].first = i;
                mp[a].second = i;
            }
            else
                mp[a].second = i;
        }
        while (k--)
        {
            long long a, b;
            cin >> a >> b;
            if (!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}