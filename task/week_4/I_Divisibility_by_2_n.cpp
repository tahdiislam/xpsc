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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int d = pow(2, n);
        int cnt = 0;
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] % 2 != 0)
            {
                int a = v[i] * i;
                if (a % 2 == 0)
                    cnt++;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}