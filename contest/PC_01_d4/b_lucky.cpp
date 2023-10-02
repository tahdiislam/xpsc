#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin>> s;
    int i = 0;
    int j = s.size()-1;
    int si = 0;
    int sj = 0;
    while (i < 3) {
      si += s[i];
      sj += s[j];
      i ++;
      j --;
    }
    if(si == sj)
      cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
