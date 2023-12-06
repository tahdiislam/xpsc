#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, d;

        cin >> a >> b >> c >> d;

        long long mod1 = a % b;
        long long mod2 = (c % d);

        long long req = (b - mod1);
        long long req2 = (d - mod2);

        if (req == 1 && req2 == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        if ((req == 1) || (req2 == 1))
        {
            long long z = (b * d);
            long long gc = __gcd(b, d);
            z /= gc;

            if (req == 1)
                cout << (z - mod1) << "\n";
            else
                cout << (z - mod2) << "\n";
        }
        else
            cout << 1 << "\n";
    }
    return 0;
}