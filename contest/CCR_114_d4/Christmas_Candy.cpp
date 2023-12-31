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
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = INT_MIN;
        int mxIn = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // if (v[i] > mx)
            // {
            //     mx = v[i];
            //     mxIn = i;
            // }
        }
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            mx = max(mx, v[i - 1]);
            if (v[i] < mx)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}