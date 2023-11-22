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
        vector<long long> s(n);
        vector<long long> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        cout << f[0] - s[0] << " ";
        for (int i = 1; i < n; i++)
        {
            long long a = max(f[i - 1], s[i]);
            cout << f[i] - a << " ";
        }
        cout << endl;
    }
    return 0;
}