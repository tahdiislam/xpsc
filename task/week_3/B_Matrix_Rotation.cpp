#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);
        pair<int, int> mn = {INT_MAX, -1};
        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
            if (v[i] < mn.first)
                mn = {v[i], i};
        }
        if (mn.second == 0)
        {
            if (v[1] > v[0] && v[1] < v[3] && v[2] > v[0] && v[3] > v[2])
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (mn.second == 1)
            if (v[3] > v[1] && v[3] < v[2] && v[0] > v[1] && v[0] < v[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else if (mn.second == 3)
            if (v[2] > v[3] && v[2] < v[0] && v[1] > v[3] && v[1] < v[0])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else if (mn.second == 2)
            if (v[0] > v[2] && v[0] < v[1] && v[3] > v[2] && v[3] < v[1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}