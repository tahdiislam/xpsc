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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one_cnt++;
        }
        if (k < one_cnt)
        {
            for (int i = 0; i < n; i++)
            {
                if (k > 0 && s[i] == '1')
                {
                    s[i] = '0';
                    k--;
                }
            }
            cout << s << endl;
        }
        else
        {
            int a = n - k;
            for (int i = 0; i < a; i++)
            {
                cout << '0';
            }
            cout << endl;
        }
    }
    return 0;
}