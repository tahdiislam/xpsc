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
        int arr[n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mn = min(mn, a);
            arr[i] = a;
        }
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != mn)
            {
                cnt += arr[i] - mn;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}