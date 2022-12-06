#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int arr[] = {1, 2, 54, 3, 89, 3};

  // Lenght of an array in c++
  int n = sizeof(arr) / sizeof(int);

  int ele = 5;

  auto i = find(arr, arr + n, ele);
  int index = i - arr; // if index == size of the array then the ele is not present in the array
                       // else it returns the index of the ele

  if (index == n)
  {
    cout << "Key is not present" << endl;
  }

  else
  {
    cout << "The ele is present at index : " << index << endl;
  }

  return 0;
}