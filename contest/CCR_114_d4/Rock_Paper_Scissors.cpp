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
        string s;
        cin >> s;
        int rw = floor(n / 2) + 1;
        int cnt = 0;
        string a = "";
        for (int i = 0; i < n; i++)
        {
            if (cnt < rw)
            {
                cnt++;
                if (s[i] == 'R')
                    a += 'P';
                else if (s[i] == 'P')
                    a += 'S';
                else
                    a += 'R';
            }
            else
                a += s[i];
        }
        cout << a << "\n";
    }
    return 0;
}