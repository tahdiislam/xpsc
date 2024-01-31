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
        int cnt = 0;
        for(int i = 0; i < 5;i++)
        {
            int a;cin>> a;
            if(a == 1)  cnt++;
        }
        if(cnt >= 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}