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
        int om = INT_MIN;
        int addy = INT_MIN;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                a++;
                om = max(om, a);
            }
            else
                a = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                b++;
                addy = max(addy, b);
            }
            else
                b = 0;
        }
        if (om > addy)
            cout << "Om" << endl;
        else if (addy > om)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}