#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
        {
            int x = a + b;
            int ans = INT_MAX;
            int i = x - 1, j = 1;
            while (x > j)
            {
                if (i % j == 0)
                {
                    ans = min(ans, abs(a - i));
                }
                i--;
                j++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}