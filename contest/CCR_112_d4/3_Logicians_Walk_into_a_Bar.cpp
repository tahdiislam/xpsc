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
        string v;
        cin >> v;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '1')
            {
                if (i == n - 1 && ok)
                    cout << "YES" << endl;
                else if (!ok)
                    cout << "NO" << endl;
                else
                    cout << "IDK" << endl;
            }
            else if (v[i] == '0' || !ok)
            {
                ok = false;
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}