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
        int x, y;cin>> x >> y;
        if (x < 50) cout << "Z" << endl;
        else if(y < 50 && x >= 50) cout << "F" << endl;
        else cout << "A" << endl;
    }
    return 0;
}