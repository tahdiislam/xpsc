#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[N] = {0};
    int fr = -1;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      arr[a]++;
      if (arr[a] >= 3)
      {
        fr = a;
      }
    }
    cout << fr << endl;
  }
  return 0;
}
