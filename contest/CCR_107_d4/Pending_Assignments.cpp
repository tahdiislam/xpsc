#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 1440 * z;
        int b = x * y;
        if (b <= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}