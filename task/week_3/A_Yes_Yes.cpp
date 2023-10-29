#include <bits/stdc++.h>
using namespace std;

bool is_substr(string str, string sub_str)
{
    size_t ws = sub_str.size();
    for (size_t i = 0; i < str.size() - ws + 1; i++)
    {
        string w = str.substr(i, ws);
        if (w == sub_str)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if (is_substr(s, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}