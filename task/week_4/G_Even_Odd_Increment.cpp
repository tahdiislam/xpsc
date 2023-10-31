// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<long long> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         while (q--)
//         {
//             int a, b;
//             cin >> a >> b;
//             long long sum = 0;
//             if (a == 0)
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (v[i] % 2 == 0)
//                         v[i] = v[i] + b;
//                     sum += v[i];
//                 }
//             else
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (v[i] % 2 != 0)
//                         v[i] = v[i] + b;
//                     sum += v[i];
//                 }
//             cout << sum << endl;
//         }
//     }
//     return 0;
// }

#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q, s = 0, p, ec = 0, oc = 0;
        cin >> n >> q;
        while (n--)
        {
            cin >> p;
            if (p % 2)
                oc++;
            else
                ec++;
            s += p;
        }
        while (q--)
        {
            ll qt, v;
            cin >> qt >> v;
            if (qt)
            {
                s += v * oc;

                if (v % 2)
                {
                    ec += oc;
                    oc = 0;
                }
            }
            else
            {
                s += v * ec;

                if (v % 2)
                {
                    oc += ec;
                    ec = 0;
                }
            }

            cout << s << endl;
        }
    }
}
