#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 0; j < s[i].size(); j++)
            {
                string pref = s[i].substr(0, j);
                string suff = s[i].substr(j, s[i].length() - j);
                if (mp[pref] && mp[suff])
                    ok = true;
            }
            cout << ok;
        }
        cout << endl;
    }
    return 0;
}