#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int deno[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int n = 10;
    int v;
    cin >> v;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (v >= deno[i])
        {
            v -= deno[i];
            ans.push_back(deno[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}