#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long arr[n];
    int sm = INT_MAX;
    int chng = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      arr[i] = a;
      if (sm > a)
      {
        sm = a;
        chng++;
      }
    }
    if (chng == 0)
      cout << 0 << endl;
    else
    {
      long long sum = 0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] > sm)
        {
          sum += arr[i] - sm;
        }
      }
      cout << sum << endl;
    }
  }
  return 0;
}
