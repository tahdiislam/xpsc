#include <bits/stdc++.h>
using namespace std;

bool vis[20];
void back(int n, vector<int> &v)
{
    if (v.size() == n)
    {
        for (int a : v)
            cout << a << " ";
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            v.push_back(i);
            vis[i] = true;
            back(n, v);
            vis[i] = false;
            v.pop_back();
        }
    }
}

// solve function
void solve()
{
    int n;
    cin >> n;
    memset(vis, false, sizeof(vis));
    vector<int> v;
    back(n, v);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}