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
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
            cout << 1 << endl;
        else if (n > 2)
        {
            int a = 1;
            int b = (n - 2) / 7;
            a += b;
            cout << a << endl;
        }
    }
    return 0;
}