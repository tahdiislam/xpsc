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
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i])
                cnt1++;
            else
                cnt0++;
        }
        if (cnt1 > cnt0)
            cout << cnt0 << endl;
        else if (cnt0 > cnt1)
            cout << cnt1 << endl;
        else
            cout << cnt0 << endl;
    }
    return 0;
}