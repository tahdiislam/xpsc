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
        int a, b;
        cin >> a >> b;
        int c = a / 2;
        if (a % 2 != 0)
            c++;
        if (b >= c)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}