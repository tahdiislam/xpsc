#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int b = x % k;
        int g = (n - x) % k;
        if (b > g)
            cout << b - g << endl;
        else if (b < g)
            cout << g - b << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}