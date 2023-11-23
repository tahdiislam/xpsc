#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        int total_profit = P + Q + R + S;
        int max_profit = max(P, max(Q, max(R, S)));

        if (max_profit > (total_profit - max_profit))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}