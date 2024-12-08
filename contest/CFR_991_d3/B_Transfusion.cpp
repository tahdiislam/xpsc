#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        long long target = sum / n;
        long long surplus = 0;

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            surplus += (a[i] - target);
            if (surplus < 0)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
