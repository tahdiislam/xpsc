#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0);
    v[2] = 1;
    for (int i = 3; i <= n; i += 2)
        if (is_prime(i))
            v[i] = 1;
    int counter1, counter2 = 0;
    for (int i = 6; i <= n; i++)
    {
        counter1 = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0 && v[j])
                counter1++;
            if (counter1 > 2)
                break;
        }
        if (counter1 == 2)
            counter2++;
    }
    cout << counter2;
    return 0;
}