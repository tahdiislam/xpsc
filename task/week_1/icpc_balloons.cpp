#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int arr[26] = {0};
    int ans = 0;
    while (n--) {
      char a;
      cin >> a;
      if(arr[a - 'A'] != 1)
      {
        arr[a - 'A'] = 1;
        ans += 2;
      }
      else ans+= 1;
    }
    cout << ans << endl;
  }
  return 0;
}
