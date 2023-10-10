#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    vector<long long> arr_sort(n);
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        arr[i] = a;
        arr_sort[i] = a;
    }
    sort(arr_sort.begin(), arr_sort.end());
    vector<long long> pre(n);
    vector<long long> pre_sort(n);
    pre[0] = arr[0];
    pre_sort[0] = arr_sort[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
        pre_sort[i] = arr_sort[i] + pre_sort[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        l--;
        r--;
        long long sum;
        if (t == 1)
        {
            if (l == 0)
                sum = pre[r];
            else
                sum = pre[r] - pre[l - 1];
        }
        else
        {
            if (l == 0)
                sum = pre_sort[r];
            else
                sum = pre_sort[r] - pre_sort[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}