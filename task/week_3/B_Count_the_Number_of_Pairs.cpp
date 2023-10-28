#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int A[26] = {0};
        int a[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                a[s[i] - 'a']++;
            else
                A[s[i] - 'A']++;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << A[i] << " ";
        // }
        // cout << endl;
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0 && a[i] == A[i])
            {
                cnt += a[i];
                a[i] = 0;
                A[i] = 0;
            }
            else if (A[i] != 0 && a[i] > A[i])
            {
                cnt += A[i];
                a[i] -= A[i];
                A[i] = 0;
            }
            else if (a[i] != 0 && a[i] < A[i])
            {
                cnt += a[i];
                A[i] -= a[i];
                a[i] = 0;
            }
            if (a[i] == 0 && A[i] >= 2)
            {
                if (k > 0)
                {
                    int b = A[i] / 2;
                    if (b >= k)
                    {
                        cnt += k;
                        k = 0;
                    }
                    else
                    {
                        cnt += b;
                        k -= b;
                    }
                }
            }
            else if (A[i] == 0 && a[i] >= 2)
            {
                if (k > 0)
                {
                    int b = a[i] / 2;
                    if (b >= k)
                    {
                        cnt += k;
                        k = 0;
                    }
                    else
                    {
                        cnt += b;
                        k -= b;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}