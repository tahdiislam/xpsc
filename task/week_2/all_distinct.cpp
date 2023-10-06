#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[N] = {0};
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ar[a]++;
        }
        int cnt = 0;
        for (int i = 1; i < N; i++)
        {
            if (ar[i] >= 1)
            {
                cnt++;
            }
        }
        if ((n - cnt) % 2 == 0)
        {
            cout << cnt << endl;
        }
        else
            cout << cnt - 1 << endl;
    }
    return 0;
}