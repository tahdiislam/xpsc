#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (N <= M * 36)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}