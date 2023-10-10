#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> arr_gcd(1001);
    int gcd = -1;
    int mx_gcd = 0;
    for (int i = 2; i <= 1000; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                cnt++;
            }
        }
            if (cnt > mx_gcd)
            {
                mx_gcd = cnt;
                gcd = i;
            }
    }
    cout << gcd << endl;
    return 0;
}