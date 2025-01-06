#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int num_of_lucky_digit =0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            num_of_lucky_digit++;
        }
    }
    if(num_of_lucky_digit == 4 || num_of_lucky_digit == 7) cout << "YES";
    else cout << "NO";
    return 0;
}