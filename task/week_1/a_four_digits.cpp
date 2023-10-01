#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin >> a;
  if(a.size() == 4)
  {
    cout << a << endl;
  }
  else {
    for(int i = 0; i < 4 - a.size();i++)
      cout << 0;
    cout << a << endl;
  }
  return 0;
}
