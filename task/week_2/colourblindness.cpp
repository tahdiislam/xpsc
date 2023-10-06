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
        string st1, st2;
        cin >> st1 >> st2;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (st1[i] == 'R')
            {
                if (st1[i] != st2[i])
                {
                    ans = false;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (st2[i] == 'R')
            {
                if (st1[i] != st2[i])
                {
                    ans = false;
                    break;
                }
            }
        }
        if (!ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}