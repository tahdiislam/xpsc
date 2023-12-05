#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                string str(1, s[i]);
                a += str;
            }
        }
        cout << a << endl;
    }

    return 0;
}