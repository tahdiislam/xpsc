#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    long long ans = 0;
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            for (int a = 1; a <= k; a++)
            {
                // cout << i << " " << j << " " << a << endl;
                if ((i < j && i < a) || (a == j && i < a) || (i == j && i == a) || (j > i && i == a) || (a > i && i == j))
                {
                    // cout << "i: " << i << endl;
                    ans += i;
                }
                else if ((j < i && j < a) || (j < i && i == a) || (i > j && j == a))
                {
                    // cout << "j: " << j << endl;
                    ans += j;
                }
                else if ((a < i && a < j) || (a < i && i == j))
                {
                    // cout << "a: " << a << endl;
                    ans += a;
                }
            }
    cout << ans << endl;
    return 0;
}