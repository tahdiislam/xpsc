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
        vector<int> v(27);
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i] - 'A' + 1]++;
        }
        for (int i = 1; i < 27; i++)
        {
            if (v[i] >= i)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}