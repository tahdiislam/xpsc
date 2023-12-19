#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 0)
            cout << n * 3 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}