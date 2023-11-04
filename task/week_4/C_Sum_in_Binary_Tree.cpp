#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long s = 0;
        while (n >= 1)
        {
            s += n;
            n /= 2;
        }
        cout << s << endl;
    }
    return 0;
}