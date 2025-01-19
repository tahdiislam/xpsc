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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> cards(n, vector<int>(m));
        int a[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> cards[i][j];
            };
            sort(cards[i].begin(), cards[i].end());
            a[i] = cards[i][0];
        }
        int b[n];
        for(int i = 0; i < n; i ++)
        {
            b[]
        }
    }
    return 0;
}