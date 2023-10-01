#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a, b, c;
  cin >> a >> b >> c;
  if(a * a + b * b < c * c)
    cout << "Yes";
  else cout << "No";
  return 0;
}
