#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], d[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> d[i];
        int x = a[0], y = d[0];
        int cnt = 0;
        for (int i = 2; i < n; i++)
        {
            if ((a[i] > x && a[i] < y) || (d[i] > x && d[i] < y))
                cnt++;
            if (a[i] < x)
                x = a[i];
            if (d[i] > y)
                y = d[i];
        }
        cout << cnt << endl;
    }
    return 0;
}