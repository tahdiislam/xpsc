#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cnt = 0;
        int j = 0;
        long long mx = INT_MIN;
        list<long long> l;
        while (j < n)
        {
            l.push_back(v[j]);
            mx = max(mx, v[j]);
            if (j >= k - 1)
            {
                if (mx & 1 != 0)
                {
                    cnt++;
                }
                if (l.front() == mx)
                {
                    mx = INT_MIN;
                }
                l.pop_front();
            }
            j++;
        }
        cout << cnt << endl;
    }
    return 0;
}