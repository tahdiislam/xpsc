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
        vector<int> v(n);
        string s;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cin >> s;
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] == v[j] && s[i] != s[j])
                {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}