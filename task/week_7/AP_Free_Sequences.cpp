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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                for (int k = i + 1; k < n; k++)
                {
                    if (a[i] - a[j] == a[k] - a[i])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}