#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v[6];
        for (int i = 0; i < 6; i++)
            cin >> v[i];
        if (v[2] > v[3])
            cout << "Alice" << endl;
        else if (v[3] > v[2])
            cout << "Bob" << endl;
        else if (v[1] > v[4])
            cout << "Alice" << endl;
        else if (v[4] > v[1])
            cout << "Bob" << endl;
        else if (v[0] > v[5])
            cout << "Alice" << endl;
        else if (v[5] > v[0])
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}