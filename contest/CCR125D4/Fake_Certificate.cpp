#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin>> t;
    while(t--)
    {
        int n;cin>> n;
        string s;cin>> s;
        int cnt =  0;
        bool start = false;
        int substr = 0;
        int longest_substr = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
            {
                cnt++;
                start = false;
                substr = 0;
            }
            else if (s[i] == '0')
            {
                if (!start)
                {
                    start = true;
                }
                substr++;
                longest_substr = max(longest_substr, substr);
            }
        }
        cout << cnt + longest_substr << endl;
    }
    return 0;
}