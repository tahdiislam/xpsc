#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        long long a = n * c;
        string s = to_string(a);
        if (s.length() == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}