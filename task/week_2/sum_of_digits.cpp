#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int cnt = 0;
    while (x.size() != 1)
    {
        cnt++;
        int n = 0;
        for (int i = 0; i < x.size(); i++)
        {
            n += x[i] - '0';
        }
        x = to_string(n);
    }
    cout << cnt << endl;
    return 0;
}