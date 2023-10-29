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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        if (arr[0] & 1 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ok = true;
            for (int a : arr)
                if (a & 1 != 0)
                {
                    ok = false;
                    break;
                }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}