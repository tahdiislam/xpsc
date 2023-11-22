#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        if (N % 2 != 0)
            cout << -1;
        else
            for (int i = N; i > 0; i--)
                cout << i << " ";

        cout << endl;
    }
    return 0;
}