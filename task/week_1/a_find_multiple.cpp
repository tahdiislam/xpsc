#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  ll x = b / c * c;
  if(x >= a)
    cout << x << endl;
  else cout << -1 << endl;
  return 0;
}
