#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    // int x = 63;
    int mask = 1 << i;
    // int newMask = (x ^ mask);
    int flipMask = ~(mask);
    int finalMask = n & flipMask;
    cout << finalMask << endl;
    return 0;
}