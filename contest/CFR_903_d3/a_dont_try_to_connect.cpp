#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int xs = x.size();
        int ss = s.size();
        int cnt = 0;
        while (x.size() < s.size())
        {
            x += x;
            cnt++;
        }
        int i = 0, j = 0;
        string a;
        while (j < x.size())
        {
            a += x[j];
            if (j >= s.size())
            {
                string b;
                for (int c = i; c <= j; c++)
                    b += a[c];
                if (s == b)
                {
                    cout << cnt << endl;
                    break;
                }
                i++;
            }
        }
        cout << x << endl;
    }
    return 0;
}