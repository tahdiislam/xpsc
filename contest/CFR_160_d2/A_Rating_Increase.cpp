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
        string s;
        cin >> s;
        int b = -1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                b = i;
                break;
            }
        }
        string x, y;
        if (b != -1)
        {
            for (int i = 0; i < b; i++)
            {
                x += s[i];
            }
            for (int i = b; i < s.size(); i++)
            {
                y += s[i];
            }
            int i = stoi(x), k = stoi(y);
            if (i < k)
            cout << i << " " << k << "\n";
            else
                cout << -1 << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}