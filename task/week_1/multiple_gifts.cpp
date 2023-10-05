#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a <= b)
    {
        a *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}