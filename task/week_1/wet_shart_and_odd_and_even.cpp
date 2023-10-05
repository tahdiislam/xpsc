#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
        sum += a;
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            long long a = sum - v[i];
            if (a % 2 == 0)
            {
                sum = sum - v[i];
                break;
            }
        }
        cout << sum;
    }
}