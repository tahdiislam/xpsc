#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()

{
    int n;
    cin >> n;
    ll arr[n];
    for (auto &c : arr)
        cin >> c;
    set<ll> st;
    for (auto c : arr)
        st.insert(c);
    if (n == 4)
    {
        if (arr[0] + arr[1] != arr[2] + arr[3])
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    else
    {
        if (st.size() >= 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}