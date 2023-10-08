#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> ar;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (a != x)
            ar.push_back(a);
    }
    if (ar.empty())
    {
        cout << endl;
    }
    else
        for (int i = 0; i < ar.size(); i++)
            cout << ar[i] << " ";
    return 0;
}