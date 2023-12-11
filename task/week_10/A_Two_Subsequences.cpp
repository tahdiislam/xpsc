#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        auto it = min_element(s.begin(), s.end());
        cout << *it << " ";
        s.erase(it);
        cout << s << endl;
    }
}