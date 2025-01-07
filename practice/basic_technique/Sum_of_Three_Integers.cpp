#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k, s;
    cin >> k >> s;
    if (k * 3 == s)
    {
        cout << 1;
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= k; j++)
        {
            int a = s - i - j;
            if (a >= 0 && a <= k)
                cnt++;
        }
    cout << cnt;
    return 0;
}