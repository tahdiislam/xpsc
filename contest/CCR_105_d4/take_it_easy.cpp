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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if (sum % n == 0)
        {
            int a = sum / n;
            if (a % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "N0" << endl;
        }
        else
            cout << "N0" << endl;
    }
    return 0;
}