#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], count = 0;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (i = 0; i < n; i++)
        {
            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i])
                count++;
        }

        cout << count << endl;
    }
    return 0;
}