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
        string chef, chefina;
        cin >> chef >> chefina;
        int m = 0, w = 0;
        for (int i = 0; i < n; i++)
        {
            if (chef[i] == 'R' && chefina[i] == 'P')
                w++;
            else if (chef[i] == 'P' && chefina[i] == 'R')
                m++;
            else if (chef[i] == 'R' && chefina[i] == 'S')
                m++;
            else if (chef[i] == 'S' && chefina[i] == 'R')
                w++;
            else if (chef[i] == 'P' && chefina[i] == 'S')
                w++;
            else if (chef[i] == 'S' && chefina[i] == 'P')
                m++;
        }
        if (m > w)
            cout << 0 << endl;
        else if (m == w)
            cout << 1 << endl;
        else
        {
            int a = m;
            int b = w;
            while (1)
            {
                a++;
                b--;
                if (a > b)
                    break;
            }
            cout << a - m << endl;
        }
    }

    return 0;
}