#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int fr[26] = {0};
  for(int i = 0; i < s.size(); i++)
  {
    fr[s[i] - 'a']++;
  }
  int ans = -1;
  for(int i = 0; i < 26; i++)
  {
    if(fr[i] == 0)
    {
      ans = i;
      break;
    }
  }
  if(ans != -1)
    cout << static_cast<char>(ans + 'a');
  else cout << "None";
  return 0;
}
