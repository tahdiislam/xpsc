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
        int n, k;
        cin >> n >> k;
        for (int i = n - k; i > 0; i--)
            cout << i << " ";
        for (int i = n - k + 1; i <= n; i++)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}