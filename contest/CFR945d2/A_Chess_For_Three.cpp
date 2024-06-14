#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    while (n--)
    {
        int a, b, c;
        cin>> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
        {
            cout << 0 << '\n';
        }
        else if(a==1&&b==1&&c==1)
        {
            cout << -1 << '\n';
        }
        else if(a%2!=0||b%2!=0||c%2!=0)
        {
            int x = 0;
            x += a%2;
            x += b%2;
            x += c%2;
            cout << x << '\n';
        }
    }
    
    return 0;
}