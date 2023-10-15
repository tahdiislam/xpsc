#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int c)
{
    int ans = 1;
    for (int i = 2; i <= a && i <= b && i <= c; i++)
        if (a % i == 0 && b % i == 0 && c % i == 0)
            ans = i;
    return ans;
}

int main()
{
    int x;
    cin >> x;
    long long sum = 0;
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= x; k++)
                sum += gcd(i, j, k);
    cout << sum << endl;
    return 0;
}