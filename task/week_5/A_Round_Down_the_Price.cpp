#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[10] = {1,
                         10,
                         100,
                         1000,
                         10000,
                         100000,
                         1000000,
                         10000000,
                         100000000,
                         1000000000};
    // for (int i = 0; i < 9; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    int t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        long long mn = INT_MAX;
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] <= m)
            {
                long long a = abs(m - arr[i]);
                mn = min(mn, a);
            }
        }
        cout << mn << endl;
    }
    return 0;
}