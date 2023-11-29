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
        vector<char> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '.')
            {
                b++;
                a = max(a, b);
            }
            else if (v[i] == '#')
            {
                b = 0;
            }
        }
        cout << a << endl;
    }

    return 0;
}