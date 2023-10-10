#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a = "Timur";
    sort(a.begin(), a.end());
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        sort(s.begin(), s.end());
        if (a == s)
            cout << "YES" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}