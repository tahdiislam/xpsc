#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (a % k == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}