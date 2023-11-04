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
        if (n < 10)
            cout << n << endl;
        else
        {
            vector<int> v;
            for (int i = 9; i > 0; i--)
            {
                if (n >= i)
                {
                    v.push_back(i);
                    n -= i;
                }
            }
            reverse(v.begin(), v.end());
            for (int c : v)
                cout << c;
            cout << endl;
        }
    }
    return 0;
}