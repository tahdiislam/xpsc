#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "YES" || s == "Yes" || s == "yEs" || s == "yeS" || s == "yes" || s == "yES" || s == "YeS" || s == "YEs")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}