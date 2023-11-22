#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        // int n;
        // cin >> n;
        // int cnt = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     string s = to_string(i);
        //     bool ok = true;
        //     if (s.size() > 1)
        //         for (int i = 1; i < s.size(); i++)
        //         {
        //             if (s[i] != s[0])
        //             {
        //                 ok = false;
        //                 break;
        //             }
        //         }
        //     if (ok)
        //         cnt += s.size();
        // }
        string s;
        cin >> s;
        int a = s[0] - '0' - 1;
        int b = s.size();
        // cout << cnt << endl;
        int c = a * 10 + b * (b + 1) / 2;
        cout << c << endl;
    }

    return 0;
}