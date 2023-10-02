#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[N] = {0};
    int mx = 0;
    int num;
    while (n--)
    {
      int a;
      cin >> a;
      arr[a]++;
      if (arr[a] >= 3)
      {
        mx = arr[a];
        num = a;
        break;
      }
    }
    if (mx >= 3)
      cout << num << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
