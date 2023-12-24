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
        vector<int> v(n);
        long long a = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            a *= v[i];
        }
        if (a == 0 || a < 0)
            cout << 0 << endl;
        else
            cout << 1 << endl
                 << 1 << " " << 0 << endl;
    }
    return 0;
}