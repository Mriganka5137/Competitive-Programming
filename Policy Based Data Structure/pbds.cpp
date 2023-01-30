#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  pbds st;
  st.insert(5);
  st.insert(15);
  st.insert(89);
  st.insert(3);
  st.insert(78);

  for (int i = 0; i < st.size(); i++)
  {
    cout << i << " " << *st.find_by_order(i) << endl;
  }

  return 0;
}