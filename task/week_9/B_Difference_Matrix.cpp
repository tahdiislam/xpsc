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
        vector<int> v;
        for (int i = n * n; i > 0; i -= 2)
        {
            v.push_back(i);
        }
        for (int i = (n * n) - 1; i > 0; i -= 2)
        {
            v.push_back(i);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (i != 0 && i % n == 0)
                cout << '\n';
            cout << v[i] << " ";
        }
    }
    return 0;
}