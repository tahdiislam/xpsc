#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == x || 2 * n - x >= x)
            cout << 0 << endl;
        else if (2 * n == x)
            cout << x << endl;
        else if (2 * n - x < x)
            cout << x - (2 * n - x) << endl;
    }
    return 0;
}