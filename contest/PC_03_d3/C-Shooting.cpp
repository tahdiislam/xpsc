#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b)
         { return a.first > b.first; });
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += v[i].first * i + 1;
    }
    cout << cnt << endl;
    for (auto a : v)
    {
        cout << a.second << " ";
    }
    return 0;
}