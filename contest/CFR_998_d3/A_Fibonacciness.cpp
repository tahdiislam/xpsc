#include <bits/stdc++.h>
using namespace std;

int fibonacci_count(int a1, int a2, int a4, int a5, int a3) {
    int cnt = 0;
    if (a3 == a1 + a2) cnt++;
    if (a4 == a2 + a3) cnt++;
    if (a5 == a3 + a4) cnt++;
    return cnt;
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
        vector<int> v(4);
        for (int i = 0; i < v.size(); i++)
            cin >> v[i];

        int a1 = v[0], a2 = v[1], a4 = v[2], a5 = v[3];

        int a3_1 = a1 + a2;
        int a3_2 = a4 - a2;
        int a3_3 = a5 - a4;

        int maxFibonacciness = max({
            fibonacci_count(a1, a2, a4, a5, a3_1),
            fibonacci_count(a1, a2, a4, a5, a3_2),
            fibonacci_count(a1, a2, a4, a5, a3_3)
        });

        cout << maxFibonacciness << endl;
    }

    return 0;
}