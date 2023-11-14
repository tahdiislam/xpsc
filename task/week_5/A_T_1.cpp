#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        cout << "CASE# " << c << ":" << endl;
        c++;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (q--)
        {
            int a;
            cin >> a;
            int l = 0, r = n - 1;
            int ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (v[mid] == a)
                    ans = mid, r = mid - 1;
                else if (a < v[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (ans != -1)
                cout << a << " "
                     << "found at " << ans + 1 << endl;
            else
                cout << a << " "
                     << "not found" << endl;
        }
    }
    return 0;
}