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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int arr2[n + 1];
        int arr3[n + 1];
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                arr2[i] = arr[i] + 1;
            }
            else
                arr2[i] = arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                arr2[i] = arr[i] + 1;
            }
            else
                arr2[i] = arr[i];
        }
        bool a1 = arr2[1] % 2 == 0;
        cout << a1 << endl;
        if()
    }
    return 0;
}
