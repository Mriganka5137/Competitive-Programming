#include <bits/stdc++.h>
using namespace std;
int main()
{

  // Ordered Map

  map<string, int> m;

  // ----------- INSERT ----------------
  m.insert(make_pair("Apple", 50));
  // cout << m["Apple"]<<endl;

  pair<string, int> p;
  p.first = "Banana";
  p.second = 20;

  m.insert(p);
  // cout << m["Banana"] << endl;

  // ----------------------  SEARCH IN A MAP ------------------------
  string fruit;
  cin >> fruit;

  auto it = m.find(fruit);
  cout << it->first << endl; //-----------------> 'it' is a reference type with 'first' and 'second' value;

  if (it != m.end())
  {
    cout << "The price of " << fruit << " is " << m[fruit] << endl;
  }
  else
  {
    cout << "The fruit is not present";
  }

  //  Another way to search in a map is using the 'count' function

  // erase
  m.erase(fruit);

  // The function returns the number of times the key K is present in the map container.
  // It returns 1 if the key is present in the container as the map only contains a unique key.
  // It returns 0 if the key is not present in the map container.
  if (m.count(fruit))
  {

    cout << m.count(fruit) << endl; // -----------> Returns '1' if found
    cout << "found" << endl;
  }
  else
  {
    cout << m.count(fruit) << endl; // -----------> Returns '0' if not found
    cout << "not found" << endl;
  }

  m["Mango"] = 100;
  m["Guava"] = 90;
  m["Apple"] = 110;
  m["Pinapple"] = 95;

  // ------------------- ITERATE over the key value pairs ----------------------

  // Using iterator
  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << "-->" << it->second << endl;
  }

  // Using For Each Loop
  for (auto ele : m)
  {
    cout << ele.first << "-->" << ele.second << endl;
  }

  return 0;
}