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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
        }
        if (n % 2 == 0)
        {
            cout << 2 << "\n"
                 << 1 << " " << n << "\n"
                 << 1 << " " << n << "\n";
        }
        else
            cout << 4 << "\n"
                 << 1 << " " << n << "\n"
                 << 2 << " " << n << "\n"
                 << 1 << " " << 2 << "\n"
                 << 1 << " " << 2 << "\n";
    }
    return 0;
}