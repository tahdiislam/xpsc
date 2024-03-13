#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, j = 0;
    cin >> n;
    string s[] = {"b", "b", "a", "a"};
    while (n--)
    {
        cout << s[j];
        j++;
        if (j == 4)
            j = 0;
    }
    cout << "\n";

    return 0;
}
