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
        string s;
        cin >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            if (v[s[i] - 'a'] == 0)
            {
                cout << s[i];
                v[s[i] - 'a']++;
            }
        }
        cout << "\n";
    }
    return 0;
}