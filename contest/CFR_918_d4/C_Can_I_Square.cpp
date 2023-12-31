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
        int n;
        cin >> n;
        long long sum = 0;
        while (n--)
        {
            long long a;
            cin >> a;
            sum += a;
        }
        long long x = sqrt(sum);
        float y = sqrt(sum);
        double z = y - x;
        if (z == 0)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}