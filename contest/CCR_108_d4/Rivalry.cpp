#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    if (a + x > b + y)
        cout << "Dominater";
    else
        cout << "Everule";
    return 0;
}