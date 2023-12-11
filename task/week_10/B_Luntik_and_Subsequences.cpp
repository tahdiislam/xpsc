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
        int cnt = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                cnt++;
            else if (a == 0)
                cnt2++;
        }
        long long a = pow(2, cnt2) * cnt;
        cout << a << endl;
    }
    return 0;
}