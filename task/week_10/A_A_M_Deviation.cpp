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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + c - 2 * b) % 3 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}