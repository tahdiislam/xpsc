#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> v(m);
        int mx = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            mx = max(v[i], mx);
            
        }
    }
    return 0;
}