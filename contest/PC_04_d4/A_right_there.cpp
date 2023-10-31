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
        if (n <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}