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
        string x;
        cin >> x;
        set<string> m;
        string z = "";
        for (int i = 0; i < x.size() - 1; i++)
        {
            z = x[i];
            z += x[i + 1];
            m.insert(z);
            z = "";
        }
        cout << m.size();
        cout << endl;
    }
    return 0;
}