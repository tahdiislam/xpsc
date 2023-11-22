#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x;
        if (a >= b)
            x = a - b - 1;
        else
            x = b - a - 1;
        int sum = a + b;
        if (x > 0)
            sum += x;
        cout << sum << endl;
    }
    return 0;
}