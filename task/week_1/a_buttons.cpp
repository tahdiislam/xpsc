#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin>> a >> b;
  int n = 2, s = 0;
  while(n--)
    if(a > b)
    {
      s+= a;
      a--;
    }
    else {
      s+= b;
      b--;
    }
  cout << s << endl;
  return 0;
}
