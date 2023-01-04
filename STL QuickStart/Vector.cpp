#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  // Initializing Vector in different ways
  vector<int> a(5, 10); //-----------------> [10,10,10,10,10]

  vector<int> b;
  vector<int> c(a.begin(), a.end()); //-------------------> [10,10,10,10,10]
  vector<int> d{1, 2, 3, 4, 5};

  // Iterate in the vector
  // For Each Loop
  /*
  for (auto ele : c)
  {
    cout << ele << " ";
  }
  cout << endl;
  */

  // For loop with index
  /*
  for (int i = 0; i < d.size(); i++)
  {
    cout << d[i] << " ";
  }
  cout << endl;
  */

  // Iterator of Vector class
  /*
  for (auto it = c.begin(); it != c.end(); it++)
  {
    cout << *it << " "; //--------------------> it is a pointer of int type
  }
  cout << endl;
  */

  // Adding Elements to Vector

  vector<int> v;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    v.push_back(ele);
  }

  for (auto ele : v)
  {
    cout << ele << " ";
  }
  cout << endl;

  // Size and Capacity of a Vector
  cout << v.capacity() << endl;
  cout << v.size() << endl;
  cout << v.max_size() << endl;

  cout << d.capacity() << endl;
  cout << d.size() << endl;
  cout << d.max_size() << endl;
  return 0;
}