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
        priority_queue<long long> q;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a > 0)
            {
                q.push(a);
            }
            else
            {
                if (!q.empty())
                {
                    cnt += q.top();
                    q.pop();
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}