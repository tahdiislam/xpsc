#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char x = a[a.size() - 1];
        char y = b[b.size() - 1];
        if (x != y)
        {
            if (x == 'S' && y == 'M')
                cout << "<" << endl;
            else if (x == 'S' && y == 'L')
                cout << "<" << endl;
            else if (x == 'M' && y == 'L')
                cout << "<" << endl;
            else if (x == 'M' && y == 'S')
                cout << ">" << endl;
            else if (x == 'L' && y == 'S')
                cout << ">" << endl;
            else if (x == 'L' && y == 'M')
                cout << ">" << endl;
        }
        else
        {
            if (a.size() == b.size())
                cout << "=" << endl;
            else if (x == 'L')
                if (a.size() > b.size())
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            else if (x == 'S')
                if (a.size() > b.size())
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
        }
    }
    return 0;
}