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
        int n, k = 0;
        cin >> n;
        int a[n + 17];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[n - 1])
            {
                k++;
                a[n - 1] = a[i];
            }
        }
        cout << k << endl;
    }
    return 0;
}