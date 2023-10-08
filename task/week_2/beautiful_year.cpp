#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i <= 9123; i++)
    {
        n++;
        // cout << n << endl;
        string s = to_string(n);
        int ar[10] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            ar[s[i] - '0']++;
        }
        int s_sz = 0;
        for (int i = 0; i < 10; i++)
        {
            if (ar[i] > 0)
                s_sz++;
        }
        if (s.size() == s_sz)
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}