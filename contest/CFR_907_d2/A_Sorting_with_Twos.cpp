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
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        if (v[n - 1] != mx)
        {
            if (mx >= (v[n - 1] * 2))
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}