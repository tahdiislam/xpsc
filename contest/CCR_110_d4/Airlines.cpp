#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int a;
        if (n % 100 == 0)
            a = n / 100;
        else
            a = (n / 100) + 1;
        if (x >= a)
            cout << 0 << endl;
        else
            cout << a - x << endl;
    }
    return 0;
}