#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a < x)
            c = c - (x - a);
        if (b < y)
            c = c - (y - b);
        if (c < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}