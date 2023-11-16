#include <bits/stdc++.h>
using namespace std;

bool areSame(bool a, bool b)
{
    return fabs(a - b) < 1e-6;
}

int main()
{
    int n;
    cin >> n;
    double l = 0.0;
    double r = n;
    while ((r - l) >= 1e-6)
    {
        double mid = l + (r - l) / 2;
        double val = mid * mid;
        if (areSame(val, n))
        {
            cout << mid;
            break;
        }
        else if (val > n)
            r = mid;
        else
            l = mid;
    }
    return 0;
}