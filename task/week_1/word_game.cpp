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
    map<string, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
      string a;
      cin >> a;
      mp[a].push_back(1);
    }
    for (int i = 0; i < n; i++)
    {
      string a;
      cin >> a;
      mp[a].push_back(2);
    }
    for (int i = 0; i < n; i++)
    {
      string a;
      cin >> a;
      mp[a].push_back(3);
    }
    // int p1 = 0, p2 = 0, p3 = 0;
    int p[3] = {0};
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
      const vector<int> &v = it->second;
      if (v.size() == 1)
        p[v[0] - 1] += 3;
      else if (v.size() == 2)
      {
        p[v[0] - 1]++;
        p[v[1] - 1]++;
      }
    }
    for (int a : p)
    {
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}
