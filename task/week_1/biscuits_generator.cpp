#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if(a > c)
    cout << 0 << endl;
  else 
  {
    double t = c + 0.5;
    int A = 0;
    int B = 0;
    while(A + a < t)
    {
      A+= a;
      B+= b;
    }
    cout << B << endl;
  }
  return 0;
}
