#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    if (k * 3 == s)
        cout << 1 << endl;
    else
    {
        long long cnt = 0;
        for (int i = 0; i <= k; i++)
            for (int j = 0; j <= k; j++)
            {
                int a = s - i - j;
                if (a >= 0 && a <= k)
                    cnt++;
            }
        cout << cnt << endl;
    }
    return 0;
}