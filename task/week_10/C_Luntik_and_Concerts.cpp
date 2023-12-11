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
        long long s;
        s = a + b * 2 + c * 3;
        if (s % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}