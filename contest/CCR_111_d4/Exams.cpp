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
        float a = (x * y) / 2;
        if (z > a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}