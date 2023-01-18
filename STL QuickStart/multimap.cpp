#include <bits/stdc++.h>
using namespace std;
int main()
{
  //------------------------------------------
  // Multimap can store duplicate keys in sorted manner
  multimap<char, string> m;
  int n = 7;
  for (int i = 0; i < n; i++)
  {
    char c;
    string val;
    cin >> c >> val;
    m.insert(make_pair(c, val));
  }

  m.erase(m.begin());

  for (auto p : m)
  {
    cout << p.first << " --> " << p.second << endl;
  }

  return 0;
}