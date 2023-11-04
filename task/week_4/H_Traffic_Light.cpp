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
        char c;
        cin >> c;
        string s;
        cin >> s;
        string s_2 = s + s;
        int ans = INT_MIN;
        int cnt = 0;
        bool st = false;
        for (int i = 0; i < s_2.size(); i++)
        {
            if (s_2[i] == c)
            {
                st = true;
            }
            if (st && s_2[i] != 'g')
            {
                cnt++;
            }
            if (s_2[i] == 'g')
            {
                ans = max(ans, cnt);
                st = false;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}