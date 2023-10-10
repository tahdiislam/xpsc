#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre[i] = arr[i] + pre[i - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        int sum;
        if (i == 0)
            sum = pre[j];
        else
            sum = pre[j] - pre[i - 1];
        cout << sum << endl;
    }
    return 0;
}