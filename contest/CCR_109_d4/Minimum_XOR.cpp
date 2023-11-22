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
        vector<int> v(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] / 2 != 0)
                v2.push_back(v[i]);
        }
        sort(v2.begin(), v2.end());
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            if (v2.size() && v[i] != v2[v2.size() - 1])
                a ^= v[i];
            else
                a ^= v[i];
        }
        cout << a << endl;
    }
    return 0;
}