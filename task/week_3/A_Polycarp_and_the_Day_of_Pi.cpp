#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a = "314159265358979323846264338327";
        string b;
        cin >> b;
        int cnt = 0;
        for (int i = 0; i < b.size(); i++)
            if (a[i] == b[i])
                cnt++;
            else
                break;
        cout << cnt << endl;
    }
    return 0;
}