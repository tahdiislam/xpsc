#include <bits/stdc++.h>
using namespace std;

char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int i = 0;
        while (i < n)
        {
            if (s[i] > 2)
            {
                ans += arr[i - 1];
                i++;
            }
            else
            {
                if (i == n - 3)
                {
                    if (s[i + 2] == '0')
                    {
                        string a;
                        a += s[i];
                        a += s[i + 1];
                        ans += arr[stoi(a)];
                        i += 3;
                    }
                    else
                        ans += arr[i - 1], i++;
                }
                else
                    ans += arr[i - 1], i++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}