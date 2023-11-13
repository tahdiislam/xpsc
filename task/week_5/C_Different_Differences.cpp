#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        for (int i = 1; i <= k; i++)
        {
            cout << min(1 + i * (i - 1) / 2, n - k + i) << " ";
        }
        cout << endl;
    }
    return 0;
}