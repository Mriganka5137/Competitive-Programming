#include <bits/stdc++.h>
using namespace std;
int main()
{

  list<int> l1;
  l1.push_back(51);
  cout << l1.front() << endl;

  list<string> l2{"Apple", "Mango", "Banana"};
  cout << l2.front() << "-->" << l2.back() << endl;

  l2.sort();
  for (auto ele : l2)
    cout << ele << "-->";
  cout << endl;

  l2.push_front("Guava");

  for (auto ele : l2)
    cout << ele << "----->";
  cout << endl;

  // Insert in a list
  auto it = l2.begin(); //----------> Iterator pointing to the start of the of list
  it++;                 //------------> Pointing to the next ele in the list
  it++;                 //-------------> Pointing to the 3rd ele in the list

  l2.insert(it, "Juice");
  cout << l2.front() << endl;
  for (auto ele : l2)
    cout << ele << "----->";
  cout << endl;
  return 0;
}