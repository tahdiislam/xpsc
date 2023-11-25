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

        int lim = 0;
        if (x < 0)
            lim = n - 1;
        else
            lim = n + 1;

        if (abs(x) > lim)
            cout << "-1\n";
        else
        {
            if (x <= 0)
            {
                int score = 1;

                while (n--)
                {
                    if (score == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "-";
                        score--;
                    }
                }
            }
            else
            {
                int score = 1;

                while (n--)
                {
                    if (score == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "+";
                        score++;
                    }
                }
            }
            cout << "\n";
        }
    }
}