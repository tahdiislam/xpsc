#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  for(int i = 0;i <= 10000;i++)
      for(int j = 0;j <= 10000; j++)
    {
      if(a*i + b*j == c) 
      {
        ans = 1;
        break;
      }
    }
  if(ans == 1)
    cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
