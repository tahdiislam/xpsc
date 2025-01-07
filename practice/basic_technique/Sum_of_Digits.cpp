#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << 0;
        return 0;
    }
    int cnt = 0;
    while (s.size() > 1)
    {
        cnt++;
        int a = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a += (s[i] - '0');
        }
        s = to_string(a);
    }
    cout << cnt;
    return 0;
}