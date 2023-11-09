#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int d = 0;
        if (n >= a * 5)
        {
            int c = a * 5;
            d = n / c;
        }
        cout << d + b << endl;
    }

    return 0;
}