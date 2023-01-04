#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> st;
  for (int i = 0; i < 6; i++)
  {
    st.push(i);
  }

  while (!st.empty())
  {
    cout << st.top() << "-->";
    st.pop();
  }

  return 0;
}