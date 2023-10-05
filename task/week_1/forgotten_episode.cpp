#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> v(n, 0);

  for (int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;
    v[a - 1] = 1;
  }

  for (int i = 0; i < n; i++)
  {
    if (!v[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}