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
        int om = 0;
        int addy = 0;
        int om_cnt = 0;
        int addy_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
            {
                om_cnt++;
                om = max(om, om_cnt);
            }
            else
                om_cnt = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
            {
                addy_cnt++;
                addy = max(addy, addy_cnt);
            }
            else
                addy_cnt = 0;
        }
        if (om > addy)
            cout << "Om" << endl;
        else if (om < addy)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}