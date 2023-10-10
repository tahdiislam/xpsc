#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        mp[a]++;
    }
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
            break;
        }
    }
    return 0;
}