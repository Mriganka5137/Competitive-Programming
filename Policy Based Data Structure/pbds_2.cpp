#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  pbds st;
  st.insert({12, 1});
  st.insert({5, 2});
  st.insert({7, 3});
  st.insert({1, 4});
  st.insert({6, 5});
  st.insert({5, 6});

  for (int i = 0; i < st.size(); i++)
  {
    cout << i << " " << st.find_by_order(i)->first << " " << st.find_by_order(i)->second << endl;
  }

  // cout << "Index of 15 is " << st.order_of_key(15) << endl; //----------------> No of elements that are strictly smaller than 15 are 3 (8,5,3)
  // cout << "Index of 1 is " << st.order_of_key(1) << endl;   // ------------> 1 is not present in the set, if its inserted then its index will be 0

  return 0;
}