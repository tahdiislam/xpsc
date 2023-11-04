#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        int ans = 1;
        for (auto a : s)
        {
            mp[a]++;
            if (mp.size() > 3)
                mp.clear(), mp[a]++, ans++;
        }
        cout << ans << endl;
    }

    return 0;
}