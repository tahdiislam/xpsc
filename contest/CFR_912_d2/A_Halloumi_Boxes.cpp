#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
            {
                ans = 0;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}