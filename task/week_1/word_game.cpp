#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string p1[n];
    string p2[n];
    string p3[n];
    for(int i = 0; i < n;i++)
      cin >> p1[i];
    for(int i = 0; i < n;i++)
      cin >> p2[i];
    for(int i = 0; i < n;i++)
      cin >> p3[i];
    int p1n= 0, p2n = 0, p3n = 0;
    for(int i = 0; i < n;i++)
    {
      if(p1[i] == p2[i] && p1[i] != p3[i])
      {
        p1n ++;
        p2n ++;
        p3n += 3;
      }else if(p1[i] == p3[i] && p1[i] != p2[i])
      {
        p1n ++;
        p3n ++;
        p2n += 3;
      }else if(p2[i] == p3[i] && p2[i] != p1[i])
      {
        p2n ++;
        p3n ++;
        p1n += 3;
      }
    }
    cout << p1n << " " << p2n << " " << p3n << endl;
    }
  return 0;
}
