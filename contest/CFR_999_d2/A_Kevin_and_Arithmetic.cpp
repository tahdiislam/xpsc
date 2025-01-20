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
        vector<long long> even;
        vector<long long> odd;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a & 1)
            {
                odd.push_back(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        vector<long long> v;
        for (long long i : even)
            v.push_back(i);
        for (long long i : odd)
            v.push_back(i);
        long long s = 0;
        int p = 0;
        for (long long i : v)
        {
            s += i;
            if (s % 2 == 0)
            {
                p++;
                while (s % 2 == 0)
                    s /= 2;
            }
        }
        cout << p << endl;
    }

    return 0;
}