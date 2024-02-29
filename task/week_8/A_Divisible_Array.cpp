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
        for (int i = 1; i <= n; i++)
        {
            if (n % 2 != 0)
                cout << i << ' ';
            else
                cout << i * 2 << ' ';
        }
        cout << '\n';
    }
    return 0;
}