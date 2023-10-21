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
        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            string a = arr[i];
            for (int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    if(arr[j] + arr[k] == a)
                    {
                        ans[i] = 1;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}