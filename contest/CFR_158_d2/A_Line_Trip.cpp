#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int b;
        for (int i = 0; i < n; i++)
            cin >> b;
        if (x % 2 == 0)
            cout << ((x - b) * 2) + 1 << endl;
        else
            cout << ((x - b) * 2) << endl;
    }
    return 0;
}