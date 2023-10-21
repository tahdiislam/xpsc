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
        long long ans = 0;
        map<string, int> mp;
        map<char, int> mp2, mp3;
        while (n--)
        {
            string s;
            cin >> s;
            ans += mp2[s[0]] + mp3[s[1]] - 2 * mp[s];
            mp[s]++;
            mp2[s[0]]++;
            mp3[s[1]]++;
        }
        cout << ans << endl;
    }
    return 0;
}