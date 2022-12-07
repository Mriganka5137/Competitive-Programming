#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int arr[] = {1, 2, 54, 3, 89, 3};

  // Lenght of an array in c++
  int n = sizeof(arr) / sizeof(int);

  int ele;
  cin >> ele;

  bool present = binary_search(arr, arr + n, ele);

  if (present)
  {
    cout << "Present!" << endl;
  }
  else
  {
    cout << "Absent!" << endl;
  }

  return 0;
}