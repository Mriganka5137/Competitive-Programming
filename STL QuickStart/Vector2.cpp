#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v{1, 2, 3, 4, 5};

  v.push_back(145);
  v.pop_back();
  v.insert(v.begin() + 2, 100);    //-----------> Inserts at position begin() + 2
  v.insert(v.begin() + 2, 5, 200); //-----------> inserts 5 ele at position begin() + 2

  v.erase(v.begin() + 5, v.begin() + 7);

  for (int ele : v)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << v.size() << endl;
  cout << v.capacity() << endl;

  v.resize(10); //--------------> Resizes the vector into the passed size  // Capacity Remains same
  cout << v.capacity() << endl;
  cout << v.size() << endl;

  v.resize(50); //----------------> Will increase the size and the capacity as well
  cout << v.capacity() << endl;
  cout << v.size() << endl;

  v.clear();                    // -----------------> Removes all elements of the vector
  cout << v.capacity() << endl; //---------------> Capacity will be the maximum vector size created
  cout << v.size() << endl;

  for (int ele : v)
  {
    cout << ele << " ";
  }
  // cout << endl;

  if (v.empty())
    cout << "This is a empty vector" << endl;

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  cout << v.front() << endl;
  cout << v.back() << endl;

  // RESERVING vector for avoiding doubling(it takes time to double the vector)
  vector<int> x;
  int n;
  cin >> n;
  x.reserve(1000); //-------------------> To Avoid Changing capacity we reserve the capacity before hand with a value

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    x.push_back(ele);
    cout << "Changing Capacity " << x.capacity() << endl;
  }

  cout << x.size() << endl;
  cout << "Capacity is " << x.capacity() << endl;

  return 0;
}