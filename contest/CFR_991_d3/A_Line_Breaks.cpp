#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int arr[t];
    for (int x = 0; x < t; x++)
    {
        int n, m;
        cin >> n >> m;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            // cout << s << endl;
            str[i] = s;
        }
        int a = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a < m)
            {
                a += str[i].size();
                if (a <= m)
                    count++;
            }
        }
        arr[x] = count;
    }
    for (int x = 0; x < t; x++)
    {
        cout << arr[x] << endl;
    }
    return 0;
}