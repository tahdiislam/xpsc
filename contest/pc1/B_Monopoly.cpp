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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e = a + b + c + d;
        if (a > e - a)
            cout << "YES"
                 << "\n";
        else if (b > e - b)
            cout << "YES"
                 << "\n";
        else if (c > e - c)
            cout << "YES"
                 << "\n";
        else if (d > e - d)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}