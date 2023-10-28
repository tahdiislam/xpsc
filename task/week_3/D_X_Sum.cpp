#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int chess[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> chess[i][j];
        int mx = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                int now = 0;
                int ci = i;
                int cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += chess[ci][cj];
                    ci--;
                    cj--;
                }
                ci = i;
                cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += chess[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i;
                cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += chess[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i;
                cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += chess[ci][cj];
                    ci++;
                    cj++;
                }
                now -= chess[i][j] * 3;
                mx = max(mx, now);
            }
        cout << mx << endl;
    }
    return 0;
}