#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a;
    cin >> a;
    if (a >= 0)
        cout << a;
    else if (a >= 10)
        cout << 0;
    else
    {
        string s = to_string(a);
        string a = s.substr(0, s.length() - 1);
        string b = s.substr(0, s.length() - 2) + s.back();
        long long num1 = stoll(a);
        long long num2 = stoll(b);
        cout << max(num1, num2) << endl;
    }
    return 0;
}