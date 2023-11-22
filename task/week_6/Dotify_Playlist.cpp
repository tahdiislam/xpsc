#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int mins = 0;
        int lang = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> mins;
            cin >> lang;
            if (lang == l)
            {
                pq.push(mins);
            }
        }

        if (pq.empty() || k > pq.size())
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            int q = 0;
            int leng = 0;
            while (q < k)
            {
                leng += pq.top();
                pq.pop();
                q++;
            }
            cout << leng << "\n";
        }
    }

    return 0;
}