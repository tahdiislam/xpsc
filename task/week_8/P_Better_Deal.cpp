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
        int x = 100 - a;
        int y = 200 - ((200 / 100) * b);
        if (x < y)
            cout << "FIRST" << endl;
        else if (x == y)
            cout << "BOTH" << endl;
        else
            cout << "SECOND" << endl;
    }
    return 0;
}