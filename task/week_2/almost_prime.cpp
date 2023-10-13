#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                if (j == 2)
                    cnt++;
                else if (j % 2 != 0)
                {
                    int sqrN = sqrt(j);
                    bool a = true;
                    for (int k = 3; k <= sqrN; k += 2)
                    {
                        if (j % k == 0)
                        {
                            a = false;
                            break;
                        }
                    }
                    if (a)
                        cnt++;
                }
            }
        }
        if (cnt == 2)
            ans++;
        // cout << cnt << endl;
    }
    cout << ans << endl;
    return 0;
}