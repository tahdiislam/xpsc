#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            if (s[i] == 'a')
                s[i + 1] = 'b';
            else
                s[i + 1] = 'a';
        }
    }
    cout << cnt << endl
         << s;
    return 0;
}