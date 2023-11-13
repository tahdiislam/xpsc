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
        map<int, int> mp;
        vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 1)
                break;
            else
            {
                mp[v[i]]++;
                cnt++;
            }
        }
        cout << n - cnt << endl;
    }
    return 0;
}