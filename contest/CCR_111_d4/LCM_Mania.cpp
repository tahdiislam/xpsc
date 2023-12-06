#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = n / 3;
        if (n % 3 != 0)
            a++;
        int x, y, z;
        bool ans = false;
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= a; j++)
                for (int k = 1; k <= a; k++)
                    if (lcm(i, j) + lcm(j, k) + lcm(k, i) == n)
                    {
                        x = i;
                        y = j;
                        z = k;
                        ans = true;
                        break;
                    }
        if (ans)
            cout << x << " " << y << " " << z << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}