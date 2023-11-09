#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = a - 1;
        int y = c - 1;
        int z = abs(c - b);
        if (x == y + z)
            cout << 3 << endl;
        else if (x < y + z)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}